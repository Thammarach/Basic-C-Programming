#include<stdio.h>
#include<stdlib.h>


int main(void){
    int i = 10;
    switch(i)
    {
        case 10 :
            printf("Hello 1");
            break;

        case 2 :
            for(int x = 0; x < 10; x++) {
                printf("Hello %d",x);
            }
            break;
        default:
            printf("Wrong");
            break;
    }
    return EXIT_SUCCESS;
}