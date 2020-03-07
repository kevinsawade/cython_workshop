#include <stdio.h>
#include <string.h>
#include "examples.h"

double fibby(const int n)
{
  int i;
  double tmp, a=0.0, b=1.0;
  for ( i = 0; i < n; i++)
  {
    tmp = a + b;
    b = a;
    a = tmp;
  }
  return a;
  // printf("Your fibonacci number is: %f\n", a);
}
