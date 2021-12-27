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
        printf("MAX : %d", b);
        printf("\nMIN : %d", a);
    }
    else if (a > b)
    {
        printf("MAX : %d", a);
        printf("\nMIN : %d", b);
    } 
    else 
    {
        printf("EQUAL");
    }
    return 0;
}