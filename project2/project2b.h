#ifndef JACOBI_H
#define JACOBI_H

#include <armadillo>
#include <iostream>

using namespace arma;
using namespace std;

void arma_diag_test(mat A);
double max_offdiag(mat A, int *k, int *l, double& max_elem);
void Jacobi_rot(mat& A, double& max_elem);

#endif /* JACOBI_H */