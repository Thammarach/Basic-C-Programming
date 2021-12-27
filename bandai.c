#include<stdio.h>
int main()
{
  int n;
  printf("Enter number of rows: ");
  scanf("%d",&n);

  for(int i=1;i<=n;i++)
  {   
    // inner loop represents column
    for(int j=1;j<=i;j++)
    {
      printf("*"); // star
    }

    printf("\n"); // new line
  }

  return 0;
}