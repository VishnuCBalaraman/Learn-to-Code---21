//Write a C program to check whether a given number is amstrong or not.

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void amstrong(int a)
{
    int rem,sum=0,x;
    x = a;
    while(x != 0)
    {
        rem = x % 10;
        sum = sum + (rem*rem*rem);
        x = x / 10;
    }
    
    if(sum == a)
        printf("Amstrong");
    else
        printf("Not Amstrong");
}

int main() 
{
    int n;
    
    scanf("%d",&n);
    
    amstrong(n);
  
    return 0;
}
