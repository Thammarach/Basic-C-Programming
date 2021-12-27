#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter your A ");
    scanf("%d",&a);
    printf("Enter your B ");
    scanf("%d",&b);
    if (a < b) 
    {
        printf("B");
    }
    if (a > b)
    {
        printf("A");
    } 
    else 
    {
        printf("AB");
    }
    return 0;
}