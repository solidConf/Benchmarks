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

/*
Printing consecutive cubes, by Cohen
http://www.cs.upc.edu/~erodri/webpage/polynomial_invariants/cohencu.htm
*/
/*
extern int __VERIFIER_nondet_int(void);
*/
extern int __VERIFIER_nondet_int(void);

int main() {
    int a, n, x, y, z;
    a = __VERIFIER_nondet_int();
    n = 0;
    x = 0;
    y = 1;
    z = 6;

    while (y*z - 18*x - 12*y + 2*z - 6 == 0) {
      //__VERIFIER_assert(z == 6 * n + 6);
      //__VERIFIER_assert(y == 3 * n * n + 3 * n + 1);
      //__VERIFIER_assert(x == n * n * n);
      //__VERIFIER_assert(y*z - 18*x - 12*y + 2*z - 6 == 0);
      //__VERIFIER_assert((z*z) - 12*y - 6*z + 12 == 0);
        //if (!(n <= a))            break;

        n = n + 1;
        x = x + y;
        y = y + z;
        z = z + 6;
    }
    /*
    __VERIFIER_assert(z == 6*n + 6);
    __VERIFIER_assert(6*a*x - x*z + 12*x == 0);
    __VERIFIER_assert(a*z - 6*a - 2*y + 2*z - 10 == 0);
    __VERIFIER_assert(2*y*y - 3*x*z - 18*x - 10*y + 3*z - 10 == 0);
    __VERIFIER_assert(z*z - 12*y - 6*z + 12 == 0);
    __VERIFIER_assert(y*z - 18*x - 12*y + 2*z - 6 == 0);
    */    
    return 0;
}
