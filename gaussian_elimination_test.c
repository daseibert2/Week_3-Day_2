#include "gaussian_elimination.h"
#include "Problem_4_A.c"
#include <stdio.h>
#include <math.h>
int main(){
  float a[N][N];
  float a_inv[N][N];
  float c[N][N];

  double e=1.0*pow(10,-8);

  a[0][0] = e;
  a[0][1] = 1.0;
  a[1][0] = 1.0;
  a[1][1] = 1.0;

  /*a[0][0] = 1.0;
  a[0][1] = 1.0;
  a[1][0] = e;
  a[1][1] = 1.0;*/

  gaussian_elem(a, a_inv);
  printf("A\n"); print_mat(a);
  printf("A_inv\n"); print_mat(a_inv);
  mat_mult(a, a_inv, c);
  printf("A*A_inv\n"); print_mat(c);

  return 0;
}
