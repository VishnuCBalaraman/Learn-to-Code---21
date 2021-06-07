//Write a C program to swap the values of two variables.

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void swapping(int n1 ,int n2)
{
    int index;
    index = n1;
    n1 = n2;
    n2 = index;
    printf("a=%d b=%d",n1,n2);
}

int main() 
{
    int a,b;
    
    scanf("%d %d",&a,&b);
    
    printf("a=%d b=%d\n",a,b);
    
    swapping(a,b);
    
    return 0;
}
