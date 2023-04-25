#include "./infra/interfaces/console.h"
#include "./services/interfaces/matrix.h"
#define SLICES 2
#define ROWS 3
#define COLUMNS 3

int main() {
  clear_screen();

  int ***matrix = create_matrix(SLICES, ROWS, COLUMNS);

  fill_matrix(matrix, SLICES, ROWS, COLUMNS);

  clear_screen();

  print_matrix(matrix, SLICES, ROWS, COLUMNS);

  terminate_matrix(matrix, SLICES, ROWS);

  return 0;
}