#include <stdio.h> 
int main() 
 { 
int a,b,c,k; 

scanf("%d %d %d", &a, &b, &c); 
if (a>=b & a>=c) 
k=a; 
if(b>=a & b>=c) 
k=b; 
if(c>=a & c>=b) 
k=c; 
printf ("MAX : %d",k); 
  } 