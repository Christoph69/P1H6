#ifndef MATRIX_H
# define MATRIX_H

// festlegen den N-dimensionalen Raumes
const unsigned int N = 2;

// definieren des Datentyps VectorN
typedef double VectorN[N];

typedef double MatrixNN[N][N];

//////////////////////////
// Funktionen für Vektoren
//////////////////////////

// Addition von zwei VectorN
void addVectors(VectorN, VectorN, VectorN);

// Multiplikation eines Vektors mit einer vorgegebenen Zahl
void scaleVector(VectorN, double, VectorN);

// Multiplikation von einer Matrize und einem Vektor
void multiplyMatrixVector(MatrixNN, VectorN, VectorN);

//////////////////////////
// Funktionen für Matrizen
//////////////////////////

// Addition von zwei Matrizen
void addMatrices(MatrixNN, MatrixNN, MatrixNN);

// Multiplikation einer Matrize mit einer vorgegebenen Zahl
void scaleMatrix(MatrixNN, double, MatrixNN);

// Multiplikation von zwei Matrizen
void multiplyMatrices(MatrixNN, MatrixNN, MatrixNN);

#endif /* MATRIX_H */

///////////////////////////////////////////////////////
// Funktion für IN und OUTput von Vektoren und Matrizen
///////////////////////////////////////////////////////

// Eingabe Funktion für Vektoren
void inputVector(VectorN);

// Eingabe Funktion für Matrizen
void inputMatrix(MatrixNN);

// Ausgabe Funktion für Vektoren
void outputVector(VectorN);

// Ausgabe Funktion für Matrizen
void outputMatrix(MatrixNN);
