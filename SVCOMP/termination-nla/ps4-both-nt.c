// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2021 DynamiTe team <https://github.com/letonchanh/dynamite>
//
// SPDX-License-Identifier: Apache-2.0

/*
  A nonlinear termination benchmark program from the OOPSLA'20 paper 
  "DynamiTe: Dynamic termination and non-termination proofs"
  by Ton Chanh Le, Timos Antonopoulos, Parisa Fathololumi, Eric Koskinen, ThanhVu Nguyen.
  Adapted from the original nonlinear benchmark nla-digbench. 
*/


extern int __VERIFIER_nondet_int(void);

int main() {
    int k, y, x, c;
    k = __VERIFIER_nondet_int();

    y = 0;
    x = 0;
    c = 0;

    while (1) {
        // __VERIFIER_assert(4*x - y*y*y*y - 2*y*y*y - y*y == 0);

        if (!(4*x - y*y*y*y - 2*y*y*y - y*y == 0))
            break;

        c = c + 1;
        y = y + 1;
        x = y * y * y + x;
    }
    // __VERIFIER_assert(k*y - (y*y) == 0);
    // __VERIFIER_assert(4*x - y*y*y*y - 2*y*y*y - y*y == 0);
    return 0;
}
