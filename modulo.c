#include <stdio.h>
 
int main(void)
{
 
    // To store two integer values
    int x, y, result;
 
    printf("Enter a positive integer: ");
    scanf("%d", &x);

    printf("Enter a positive integer: ");
    scanf("%d", &y);

    result = x % y;
    printf("%d", result);
 
    return 0;
}