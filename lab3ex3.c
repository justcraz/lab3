#include <stdio.h>
#include <math.h>
#include <locale.h>

main() {
  int n;
  printf(" Вкажіть вік в межех від 20 до 69 років:\n");
  scanf("%d", &n);

  switch (n)
{
  case 20: case 25: case 26: case 27: case 28: case 29:
  case 30: case 35: case 36: case 37: case 38: case 39:
  case 40: case 45: case 46: case 47: case 48: case 49:
  case 50: case 55: case 56: case 57: case 58: case 59:
  case 60: case 65: case 66: case 67: case 68: case 69:

  printf("%d років\n", n);
  break;
case 22: case 23: case 24:
case 32: case 33: case 34:
case 42: case 43: case 44:
case 52: case 53: case 54:
case 62: case 63: case 64:
  printf("%d роки\n", n );
  break;
case 21: case 31: case 51: case 61:
    printf("%d рік\n", n);
    break;
    default:
    printf(" Невірно вказаний вік");
    break;
}
return 0;
}
