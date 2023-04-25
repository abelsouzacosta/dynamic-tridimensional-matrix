#ifdef MATRIX_H
#define MATRIX_H

int ***createMatrix(int slices, int rows, int columns);

void fill_matrix(int ***matrix, int slices, int rows, int columns);

void print_matrix(int ***matrix, int slices, int rows, int columns);

#endif