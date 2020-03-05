#include <stdio.h>
int main()
{
  int i, n;
  double tmp, a=0.0, b=1.0;
  scanf("%d", &n);
  for ( i = 0; i < n; i++)
  {
    tmp = a + b;
    b = a;
    a = tmp;
  }
  printf("%f\n", a);
}
// this is a C comment
