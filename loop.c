#include<stdio.h>
int main()
{
  int n;

  printf("Enter number of rows: ");
  scanf("%d",&n);

  for(int i=1; i<=n; i++)
  {
    printf("A\n"); // new line
  }

  return 0;
}