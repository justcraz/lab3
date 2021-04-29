#include <stdio.h>

int main() {
  float  x1, x2, x3, y1, y2, y3;

  printf("Введіть значення x1: ");
  scanf("%f", &x1);
  printf("Введіть значення y1: ");
  scanf("%f", &y1);

  printf("\nВведіть значення x2: ");
  scanf("%f", &x2);
  printf("Введіть значення y2: ");
  scanf("%f", &y2);

  printf("\nВведіть значення x3: ");
  scanf("%f", &x3);
  printf("Введіть значення y3: ");
  scanf("%f", &y3);

  if ((x2-x1 == x3-x1) && (y2-y1 == y3-y1)) {
    printf("\nЗадані точки лежать на одній прямій");
  }
  else {
    printf("\nЗадані точки не лежать на одній прямій");
  }
}
