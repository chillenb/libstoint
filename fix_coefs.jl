using HDF5;

f = h5open("coefs.h5", "r");
coefs = read(f, "coefs");
close(f);




i = h5open("coefs2.h5", "w")
i["coefs", compress=5, chunk=(11,11,11,11,6,1,1,1,1)] = permutedims(coefs, reverse(1:ndims(coefs)))
close(i)