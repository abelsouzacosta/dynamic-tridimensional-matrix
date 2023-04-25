#include "./infra/interfaces/console.h"
#include "./services/interfaces/matrix.h"

int main() {
  clear_screen();

  callout("Initializing app");

  int matrix = create_matrix(2, 2, 2);

  return 0;
}