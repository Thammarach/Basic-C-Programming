#include <stdio.h>
int main() {
    int n, i, v=0;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    printf("Enter a positive integer: ");
    scanf("%d", &i);

    v = n / i;

    printf("%d km/h", v);

    return 0;
}
