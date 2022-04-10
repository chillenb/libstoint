using HDF5
using WignerSymbols

maxam = 5
sz = maxam + 1

function coef(l1, l2, l3, l4, m1, m2, m3, m4, L)
    accum = 0.0
    for M=-L:L
        accum += (-1)^M * wigner3j(l1, L, l2, -m1, -M, m2) * wigner3j(l3, L, l4, -m3, M, m4)
    end
    return accum
end

coefs = zeros(sz, sz, sz, sz, sz, maxam*2+1, maxam*2+1, maxam*2+1, maxam*2+1);

for l1 = 0:maxam
    for l2 = 0:maxam
        for l3 = 0:maxam
            for l4 = 0:maxam
                for m1 = 0:l1
                    for m2 = -l2:l2
                        for m3 = -l3:l3
                            for m4 = -l4:l4
                                for L = max(abs(l1-l2), abs(l3-l4)):min(l1+l2, l3+l4)
                                    coefs[l1+1, l2+1, l3+1, l4+1, m1+1, m2+sz, m3+sz, m4+sz, L+1] = coef(l1, l2, l3, l4, m1, m2, m3, m4, L)
                                end
                            end
                        end
                    end
                end
            end
        end
    end
end

f = h5open("coefs.h5", "w")
f["coefs", compress=5] = coefs
close(f)