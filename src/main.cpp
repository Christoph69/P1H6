// main.cpp
#include "../inc/matrix.h"
#include <iostream>

int main(int argc, char const *argv[]) {
  // VectorN v1 = { 1, 2 };
  // VectorN v2 = { 1, 2 };
  // VectorN erg;

  MatrixNN m1 = {  { 2, 3 }, { 4, 5 } };
  MatrixNN m2 = {  { 2, 3 },  { 4, 5 } };

  MatrixNN ergm;
  MatrixNN erg2;

  // addVectors(v1, v2, erg);

  // outputVector(erg);

  outputMatrix(m1);
  std::cout << std::endl;
  addMatrices(m1, m2, ergm);
  outputMatrix(ergm);
  std::cout << std::endl;
  multiplyMatrices(m1, m2, erg2);
  outputMatrix(erg2);

  return 0;
}
