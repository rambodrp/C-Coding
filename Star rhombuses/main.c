#include <stdio.h>

int main()
{
  //Rambod Rezvan Panah
  int n,a,j;
  scanf("%d", &n);
  if((n>=1) && (n<=19) && (n%2!=0)){
    n=n/2+1;

  for (j = 1 ; j<= n ; j++)
  {
    for (a = 1 ; a <= n-j ; a++)
      printf(" ");

      for (a = 1 ; a <= 2*j-1 ; a++)
      printf("*");

      for (a = 1 ; a <= n-j ; a++)
      printf(" ");

      for (a = 1 ; a <= n-j ; a++)
      printf(" ");

    for (a = 1 ; a <= 2*j-1 ; a++)
      printf("*");

    printf("\n");
  }

  //Rambod Rezvan Panah

  for (j = 1 ; j <= n - 1 ; j++)
  {
    for (a = 1 ; a <= j ; a++)
      printf(" ");

      for (a = 1 ; a <= 2*(n-j)-1; a++)
      printf("*");

      for (a = 1 ; a <= j ; a++)
      printf(" ");

      for (a = 1 ; a <= j ; a++)
      printf(" ");

    for (a = 1 ; a <= 2*(n-j)-1; a++)
      printf("*");

    printf("\n");
  }
//Rambod Rezvan Panah
}
  return 0;
}
