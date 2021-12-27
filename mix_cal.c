#include <stdio.h>
int main() {
    int n, i, sum1=0, sum2=0, sum3=0, sum4=0;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    printf("Enter a positive integer: ");
    scanf("%d", &i);

    sum1 = n + i;
    sum2 = n - i;
    sum3 = n * i;
    sum4 = n / i;

    printf("%d + %d = %d ", n, i, sum1);
    printf("\n%d - %d = %d ", n, i, sum2);
    printf("\n%d * %d = %d ", n, i, sum3);
    printf("\n%d / %d = %d ", n, i, sum4);

    return 0;
}
