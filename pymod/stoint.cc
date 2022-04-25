#include "../stoint/auxiliary.h"
#include "stoint.h"
#include "../stoint/twoehelper/two_e_tables.h"
#include "../stoint/twoehelper/util.h"
#include <array>
#include <cassert>
#include <csignal>
#include <vector>
#include <utility>
#include <tgmath.h>

#include <pybind11/pybind11.h>
#include <pybind11/stl.h>
#include <pybind11/numpy.h>

namespace py = pybind11;

using std::tuple;
using std::get;
typedef tuple<int,int,int,double> pyorb; // n, l, m, zeta

int add(int i, int j) {
    return i + j;
}

using std::vector;

PYBIND11_MODULE(stoint, m) {
    m.doc() = R"pbdoc(
        Stoint
        -----------------------
        .. currentmodule:: stoint
        .. autosummary::
           :toctree: _generate
           add
           subtract
    )pbdoc";

    m.def("add", &add, R"pbdoc(
        Add two numbers
        Some other explanation about the add function.
    )pbdoc");

    m.def("subtract", [](int i, int j) { return i - j; }, R"pbdoc(
        Subtract two numbers
        Some other explanation about the subtract function.
    )pbdoc");

    m.def("ao_overlap", [](const vector<pyorb> &basisset) {
        int nbf = basisset.size();
        auto overlapmat = py::array_t<double>(nbf*nbf);
        py::buffer_info buf_mat = overlapmat.request();
        double *mat = static_cast<double*>(buf_mat.ptr);
        for(int bra = 0; bra < nbf; bra++) {
            for(int ket = 0; ket < nbf; ket++) {
                const int idx = bra*nbf + ket;
                
                const int ortho = (get<1>(basisset[bra]) != get<1>(basisset[ket])) ||
                              (get<2>(basisset[bra]) != get<2>(basisset[ket])) ? 0 : 1;
                mat[idx] = ortho * OneCenterOverlap(get<0>(basisset[bra]), get<0>(basisset[ket]), get<3>(basisset[bra]), get<3>(basisset[ket]));
            }
        }
        overlapmat.resize({nbf, nbf});
        return overlapmat;
    });

    m.def("ao_laplacian", [](const vector<pyorb> &basisset) {
        int nbf = basisset.size();
        auto kemat = py::array_t<double>(nbf*nbf);
        py::buffer_info buf_mat = kemat.request();
        double *mat = static_cast<double*>(buf_mat.ptr);
        for(int bra = 0; bra < nbf; bra++) {
            for(int ket = 0; ket < nbf; ket++) {
                const int idx = bra*nbf + ket;
                
                const int ortho = ((get<1>(basisset[bra]) != get<1>(basisset[ket])) ||
                              (get<2>(basisset[bra]) != get<2>(basisset[ket]))) ? 0 : 1;
                mat[idx] = ortho * OneCenterLaplacian(get<0>(basisset[bra]), get<0>(basisset[ket]), get<3>(basisset[bra]), get<3>(basisset[ket]), get<1>(basisset[bra]));
            }
        }
        kemat.resize({nbf, nbf});
        return kemat;
    });

    m.def("ao_nuc", [](const vector<pyorb> &basisset, double Z) {
        int nbf = basisset.size();
        auto coulmat = py::array_t<double>(nbf*nbf);
        py::buffer_info buf_mat = coulmat.request();
        double *mat = static_cast<double*>(buf_mat.ptr);
        for(int bra = 0; bra < nbf; bra++) {
            for(int ket = 0; ket < nbf; ket++) {
                const int idx = bra*nbf + ket;
                
                const int ortho = ((get<1>(basisset[bra]) != get<1>(basisset[ket])) ||
                              (get<2>(basisset[bra]) != get<2>(basisset[ket]))) ? 0 : 1;
                mat[idx] = ortho * OneCenterNuclearAttraction(get<0>(basisset[bra]), get<0>(basisset[ket]), get<3>(basisset[bra]), get<3>(basisset[ket]), Z);
            }
        }
        coulmat.resize({nbf, nbf});
        return coulmat;
    });

    m.def("init", []() {
        two_int_init();
    });

    m.def("ao_eri", [](const vector<pyorb> &basisset, bool four_d) {
        two_int_init();
        int nbf = basisset.size();
        auto eri = py::array_t<double>(nbf*nbf*nbf*nbf);
        py::buffer_info buf_mat = eri.request();
        double *mat = static_cast<double*>(buf_mat.ptr);

        std::vector<orbital> repackbasis(nbf);
        for(int i = 0; i < nbf; i++) {
            const auto& o = basisset[i];
            repackbasis[i] = {short(get<0>(o)), short(get<1>(o)), short(get<2>(o)), get<3>(o)};
        }

        //#pragma omp parallel for collapse(2)
        for(int b1 = 0; b1 < nbf; b1++) {
            for(int b2 = 0; b2 < nbf; b2++) {
                for(int k1 = 0; k1 < nbf; k1++) {
                    for(int k2 = 0; k2 < nbf; k2++) {
                        const int idx = k2 + nbf*(k1 + nbf*(b2 + nbf*b1));
                        mat[idx] = two_e_int({repackbasis[b1], repackbasis[b2], repackbasis[k1], repackbasis[k2]});
                    }
                }
            }
        }
        if(four_d) {
            eri.resize({nbf , nbf, nbf , nbf});
        } else {
            eri.resize({nbf * nbf, nbf * nbf});
        }
        return eri;
    });

#ifdef VERSION_INFO
    m.attr("__version__") = VERSION_INFO;
#else
    m.attr("__version__") = "dev";
#endif
}