#include<stdio.h>
int main()
{
  int n;

  printf("Enter number of rows: ");
  scanf("%d",&n);

  for(int i=1; i<=n; i++)
  {
    printf("#"); // space 
  }

  for(int i=1; i<=n-2; i++)
  {
        printf(" \n");
        printf("#");
        printf(" ");
        printf("#");
        printf(" ");  
  }

    printf("\n");

    for(int i=1; i<=n; i++)
  {
    printf("#"); // space 
  }

  return 0;
}