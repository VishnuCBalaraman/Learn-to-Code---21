//Write a C program to find the factorial of a given number using a recursive function.

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int fact(int n)
{
    if(n == 0)
        return 1;
    else 
        return (n*fact(n-1));
    
}

int main() 
{
    int a;
    
    scanf("%d",&a);
    
    
    if(a>=0)
        printf("%d",fact(a));
    else
        printf("ERROR");
    
    return 0;
}
