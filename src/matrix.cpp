// matrix.cpp
#include "../inc/matrix.h"
#include <iostream>

// Addition von zwei VectorN
void addVectors(VectorN vec1, VectorN vec2, VectorN erg) {
  for (int i = 0; i < N; i++) {
    erg[i] = vec1[i] + vec2[i];
  }
}

// Addition von zwei Matrizen
void addMatrices(MatrixNN m1, MatrixNN m2, MatrixNN erg) {
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      erg[i][j] = m1[i][j] + m2[i][j];
    }
  }
}

// Multiplikation eines Vektors mit einer vorgegebenen Zahl
void scaleVector(VectorN vec, double x, VectorN erg) {
  for (int i = 0; i < N; i++) {
    erg[i] = vec[i] * x;
  }
}

// Multiplikation einer Matrize mit einer vorgegebenen Zahl
void scaleMatrix(MatrixNN m, double x, MatrixNN erg) {
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; i++) {
      erg[i][j] = m[i][j] * x;
    }
  }
}

// Multiplikation von einer Matrize und einem Vektor
void multiplyMatrixVector(MatrixNN matr, VectorN vec, VectorN erg) {
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      erg[i] = matr[i][j] * vec[j] + erg[i];
    }
  }
}

// Multiplikation von zwei Matrizen
void multiplyMatrices(MatrixNN m1, MatrixNN m2, MatrixNN erg) {
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      for (int k = 0; k < N; k++) {
        erg[i][j] = m1[i][k] * m2[k][j] + erg[i][j];
      }
    }
  }
}

// Eingabe Funktion für Vektoren
void inputVector(VectorN vec) {
  for (int i = 0; i < N; i++) {
    std::cout << "Eingabe von a[" << i + 1 << "]: ";
    std::cin >> vec[i];
  }
}

// Eingabe Funktion für Matrizen
void inputMatrix(MatrixNN matr) {
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      std::cout << "Eingabe von a[" << i + 1 << "][" << j + 1 << "]: ";
      std::cin >> matr[i][j];
    }
  }
}

// Ausgabe Funktion für Vektoren
void outputVector(VectorN vec) {
  for (int i = 0; i < N; i++) {
    std::cout << vec[i] << std::endl;
  }
}

// Ausgabe Funktion für Matrizen
void outputMatrix(MatrixNN matr) {
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      std::cout << matr[i][j] << "\t";
    }
    std::cout << std::endl;
  }
}
