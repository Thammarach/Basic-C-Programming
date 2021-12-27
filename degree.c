#include <stdio.h>
int main() {
   int x, y, i, sum=1;
   printf("Enter the number of rows: ");
   scanf("%d", &x);
   printf("Enter the number of rows: ");
   scanf("%d", &y);
   for (i = 1; i <= y; ++i) {
      sum = sum*x;
   }
   printf("%d", sum);
   return 0;
}