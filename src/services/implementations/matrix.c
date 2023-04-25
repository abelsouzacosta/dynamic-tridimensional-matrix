#include "../interfaces/matrix.h"
#include "../../infra/interfaces/console.h"
#include <stdio.h>
#include <stdlib.h>

int ***create_matrix(int slices, int rows, int columns) {
  int ***matrix = calloc(slices, sizeof(int **));

  if (matrix == NULL) {
    throw_error("Matrix not created -> Memory allocation failed!");\
    exit(EXIT_FAILURE);
  }

  for (int s = 0; s < slices; s += 1) {
    matrix[s] = calloc(rows, sizeof(int *));

    for (int r = 0; r < rows; r += 1) {
      matrix[s][r] = calloc(columns, sizeof(int));
    }
  }

  return matrix;
}

void fill_matrix(int ***matrix, int slices, int rows, int columns) {
  for (int s = 0; s < slices; s += 1) {
    for (int r = 0; r < rows; r += 1) {
      for (int c = 0; c < columns; c += 1) {
        write_console(
            "Digite o número inteiro para a posição matrix[%d][%d][%d]: ", s, r,
            c);
        scanf("%d", &matrix[s][r][c]);
      }
    }
  }
}

void print_matrix(int ***matrix, int slices, int rows, int columns) {
  for (int s = 0; s < slices; s += 1) {
    write_console("[");
    for (int r = 0; r < rows; r += 1) {
      write_console("[");
      for (int c = 0; c < columns; c += 1) {
        if (c != columns - 1) {
          write_console("%d, ", matrix[s][r][c]);
        } else {
          write_console("%d", matrix[s][r][c]);
        }
      }
      if (r != rows - 1) {
        write_console("],");
      } else {
        write_console("]");
      }
    }
    if (s != slices - 1) {
      write_console("],");
    } else {
      write_console("]\n");
    }
  }
}
