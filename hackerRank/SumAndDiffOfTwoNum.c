#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <limits.h>

int main ()
{
  int num1, num2;
  float num3, num4;

  scanf("%d %d", &num1, &num2);
  scanf("%f %f", &num3, &num4);

  printf("%d %d\n",(num1 + num2), (num1 - num2));
  printf("%.1f %.1f\n",(num3 + num4), (num3 - num4));

  return 0;
}