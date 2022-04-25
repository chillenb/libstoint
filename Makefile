#CC = gcc
#CXX = g++
LD = ld
LIBS = -lm
TESTLIBS = -lgtest -Bstatic -l:libstoint.a
MODLIBS = -Bstatic -l:libstoint.a

FAST_CFLAGS = -g -O0 -march=native -ffast-math -Wall
CFLAGS = $(FAST_CFLAGS) -fPIC #-g -Wall -Og
#CFLAGS =  -g -Wall -Og
LDFLAGS = 
CXXFLAGS = -std=c++17



SRCDIR := stoint
OBJDIR := obj
INCDIR := include
TESTDIR := test
BUILDDIR := build
PYMODDIR := pymod

INCLUDES = -I $(INCDIR) -I.

SRCS := $(foreach x, $(SRCDIR), $(wildcard $(addprefix $(x)/*,.c*))) 
INTSRCS := $(foreach x, $(SRCDIR)/twoeints, $(wildcard $(addprefix $(x)/*,.c*))) $(foreach x, $(SRCDIR)/twoehelper, $(wildcard $(addprefix $(x)/*,.c*)))

OBJS := $(addprefix $(OBJDIR)/, $(addsuffix .o, $(notdir $(basename $(SRCS)))))
INTOBJS := $(addprefix $(OBJDIR)/, $(addsuffix .o, $(notdir $(basename $(INTSRCS)))))


TESTSRCS := $(foreach x, $(TESTDIR), $(wildcard $(addprefix $(x)/*,.c*)))
#TESTOBJS := $(addprefix $(OBJDIR)/, $(addsuffix .o, $(notdir $(basename $(TESTSRCS)))))
TESTBINS := $(addprefix $(BUILDDIR)/, $(notdir $(basename $(TESTSRCS))))

LIB = $(BUILDDIR)/libstoint.a

PYMODSRCS  :=  $(foreach x, $(PYMODDIR), $(wildcard $(addprefix $(x)/*,.cc*)))

SUFX := $(shell python3-config --extension-suffix)
PYMOD := $(addsuffix $(SUFX), stoint)

DEPS = $(OBJS:.o:.d)

# SRCS = $(wildcard *.cc)
# OBJS = $(SRCS:.cc=.o)

TARGET_TEST = test_exe

default: makedir all

all: testbins lib

lib: $(LIB)

$(OBJDIR)/combined.o: $(INTOBJS)
	$(LD) -r -o $(OBJDIR)/combined.o $(INTOBJS)

$(LIB): $(OBJS) $(OBJDIR)/combined.o
	ar rcs $(LIB) $(OBJDIR)/combined.o $(OBJS)

$(TARGET): $(OBJS)
	@echo $(SRCS)
	@echo $(OBJS)
	$(CXX) $(CFLAGS) -o $(TARGET) $(OBJS) $(LIBS) $(TESTLIBS) $(LDFLAGS)

$(OBJDIR)/%.o: $(SRCDIR)/%.cc
	$(CXX) -c $(INCLUDES) $(CFLAGS) $(CXXFLAGS) -o $@ $<

$(OBJDIR)/%.o: $(SRCDIR)/%.c
	$(CC) -c $(INCLUDES) $(CFLAGS) -o $@ $<

$(OBJDIR)/%.o: $(SRCDIR)/twoeints/%.c
	$(CC) -c $(INCLUDES) $(CFLAGS) -o $@ $<

$(OBJDIR)/%.o: $(SRCDIR)/twoehelper/%.c
	$(CC) -c $(INCLUDES) $(CFLAGS) -o $@ $<

.PHONY: depend clean makedir halfclean moduleclean

makedir:
	@mkdir -p $(OBJDIR) $(BUILDDIR)

clean:
	@echo CLEAN $(OBJS) $(LIB) $(TESTBINS)
	@rm -f $(OBJS) $(LIB) $(TESTBINS)

fullclean: clean
	@echo CLEAN $(INTOBJS) $(OBJDIR)/combined.o
	@rm -f $(INTOBJS) $(OBJDIR)/combined.o

depend: $(SRCS)
	makedepend $^

tests: testbins
	$(BUILDDIR)/tests

testbins: $(TESTBINS) 

$(TESTBINS): $(TESTSRCS) $(LIB)
	$(CXX) $(INCLUDES) $(LDFLAGS) $(CFLAGS) $(CXXFLAGS) -L $(BUILDDIR) -o $@ $< $(TESTLIBS)

module: $(PYMOD)
	@echo $(PYMOD)

moduleclean:
	@rm -f $(PYMOD)

$(PYMOD): $(PYMODSRCS) $(LIB)
	$(CXX) $(INCLUDES) $(LDFLAGS) $(CFLAGS) $(CXXFLAGS) -L $(BUILDDIR) $(shell python3-config --ldflags --libs --cflags) -fopenmp -std=c++11 -shared -fPIC -Bstatic $(shell python3 -m pybind11 --includes) -o $@ $< $(MODLIBS)

showinfo:
	@echo $(INTOBJS)