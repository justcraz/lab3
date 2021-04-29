#include <stdio.h>
#include <math.h>

int main() {
  int x,y,z;
  float t;

  printf("\nВведіть x: ");
  scanf("%d", &x);
  printf("Введіть y: ");
  scanf("%d", &y);
  printf("Введіть z: ");
  scanf("%d", &z);

  if ((3 * ((float)x / ((float)z-2*(float)y))) < 0) {
    printf("Ви ввели некоретні значення виконується добування кореня з від'ємного числа\n");
  }
  else if ((z -  2*y) == 0) {
    printf("Ви ввели некоретні значення виконується ділення на 0\n");
  }
  else {
    t = sqrt((float)3 * ((float)x / ((float)z-2*(float)y) ) ) - (float)y*(float)z + sin(pow(x, 2));
    printf("Відповідь: %.2f", t);
  }


  return 0;
}
