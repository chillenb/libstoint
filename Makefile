CC = gcc 
CXX = g++
LIBS = -lm
TESTLIBS = -lgtest -Bstatic -l:libstoint.a

FAST_CFLAGS = -g -O3 -march=native -ffast-math -Wall
CFLAGS = $(FAST_CFLAGS)
CXXFLAGS = -std=c++14
INCLUDES = -I.


SRCDIR := stoint
OBJDIR := obj
INCDIR := include
TESTDIR := test
BUILDDIR := build


SRCS := $(foreach x, $(SRCDIR), $(wildcard $(addprefix $(x)/*,.c*)))
OBJS := $(addprefix $(OBJDIR)/, $(addsuffix .o, $(notdir $(basename $(SRCS)))))

TESTSRCS := $(foreach x, $(TESTDIR), $(wildcard $(addprefix $(x)/*,.c*)))
#TESTOBJS := $(addprefix $(OBJDIR)/, $(addsuffix .o, $(notdir $(basename $(TESTSRCS)))))
TESTBINS := $(addprefix $(BUILDDIR)/, $(notdir $(basename $(TESTSRCS))))

LIB = $(BUILDDIR)/libstoint.a


DEPS = $(OBJS:.o:.d)

# SRCS = $(wildcard *.cc)
# OBJS = $(SRCS:.cc=.o)

TARGET_TEST = test_exe

default: makedir all

all: testbins lib

lib: $(LIB)

$(LIB): $(OBJS)
	ar rcs $(LIB) $(OBJS)

$(TARGET): $(OBJS)
	@echo $(SRCS)
	@echo $(OBJS)
	$(CXX) $(CFLAGS) -o $(TARGET) $(OBJS) $(LIBS) $(TESTLIBS)

$(OBJDIR)/%.o: $(SRCDIR)/%.cc
	$(CXX) -c $(INCLUDES) $(CFLAGS) $(CXXFLAGS) -o $@ $<

$(OBJDIR)/%.o: $(SRCDIR)/%.c
	$(CC) -c $(INCLUDES) $(CFLAGS) -o $@ $<

.PHONY: depend clean makedir

makedir:
	@mkdir -p $(OBJDIR) $(BUILDDIR)

clean:
	@echo CLEAN $(OBJS) $(LIB) $(TESTBINS)
	@rm -f $(OBJS) $(LIB) $(TESTBINS)

depend: $(SRCS)
	makedepend $^

tests: testbins
	$(BUILDDIR)/tests

testbins: $(TESTBINS) 

$(TESTBINS): $(TESTSRCS) $(LIB)
	$(CXX) $(INCLUDES) $(CFLAGS) $(CXXFLAGS) -L $(BUILDDIR) -o $@ $< $(TESTLIBS)
