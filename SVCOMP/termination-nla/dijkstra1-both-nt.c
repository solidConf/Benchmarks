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

/* Compute the floor of the square root, by Dijkstra */
/*
extern int __VERIFIER_nondet_int(void);
*/
extern int __VERIFIER_nondet_int(void);

int main() {
    int n, p, q, r, h;

    n = __VERIFIER_nondet_int();

    p = 0;
    q = 1;
    r = n;
    h = 0;

    /*
    while ( q <= n ) {
      // if (!(q <= n)) break;

        q = 4 * q;
    }
    //q == 4^n
    */

    if (q > n) {
    while (r < 2 * p + q) {
      //__VERIFIER_assert(r < 2 * p + q);
      //__VERIFIER_assert(p*p + r*q == n*q);
      //__VERIFIER_assert(h * h * h - 12 * h * n * q + 16 * n * p * q - h * q * q - 4 * p * q * q + 12 * h * q * r - 16 * p * q * r == 0);
      //__VERIFIER_assert(h * h * n - 4 * h * n * p + 4 * (n * n) * q - n * q * q - h * h * r + 4 * h * p * r - 8 * n * q * r + q * q * r + 4 * q * r * r == 0);
      //__VERIFIER_assert(h * h * p - 4 * h * n * q + 4 * n * p * q - p * q * q + 4 * h * q * r - 4 * p * q * r == 0);
      //__VERIFIER_assert(p * p - n * q + q * r == 0);

      //if (!(q != 1))
      //    break;
      if (4 * (q / 4) == q && 2 * (p / 2) == p) {
        q = q / 4;
        h = p + q;
        p = p / 2;
        if (r >= h) {
            p = p + q;
            r = r - h;
        }
      }
      }
    }
    //__VERIFIER_assert(h*h*h - 12*h*n + 16*n*p + 12*h*r - 16*p*r - h - 4*p == 0);
    //__VERIFIER_assert(p*p - n + r == 0);
    //__VERIFIER_assert(h*h*p - 4*h*n + 4*n*p + 4*h*r - 4*p*r - p == 0);
    return 0;
}
