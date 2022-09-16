#include <stdio.h>

int main(void)
{
  int a1 = 0;
  int a2 = 1;
  int an = 0;
  int n;
  int k = 3;

  
  printf("Number in Fibonacci Series: ");
  scanf("%d",&n);

  while (k<=n)
    {
      an = a2 + a1;
      a1 = a2;
      a2 = an;
      k++;
    }
  if(n == 2)
    an = a2;

  printf("Number %d in Fibonacci Series: %d\n",n,an);

  return(0);

}
