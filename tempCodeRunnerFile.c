#include<stdio.h>
void main()
{
    int marks;
    printf("Enter your marks ");
    scanf("%d",&marks);
    if(marks<60)
    {
        printf("F");
    }
    else if(marks>=60 && marks<65)
    {
        printf("D");
    }
    else if(marks>=65 && marks<70)
    {
        printf("D+");
    }
    else if(marks>=70 && marks<75)
    {
        printf("C");
    }
    else if(marks>=75 && marks<80)
    {
        printf("C+");
    }
    else if(marks>=80 && marks<85)
    {
        printf("B");
    }
    else if(marks>=85 && marks<90)
    {
        printf("B+");
    }
    else if(marks>=90)
    {
        printf("A");
    }
}