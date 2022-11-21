#include <stdio.h> 

int main()
{
   int *a;
   int n=5;
   a = &n;
   *a -= 1;
   printf("%d\n%d", a, &n);
}
