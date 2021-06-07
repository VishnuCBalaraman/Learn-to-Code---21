//Write a C program to find the number of prime numbers in a array of integers.

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int prime(int num)
{
    int i,x,count=0;
    for(i=2;i<num;i++)
    {
        if(num % i == 0)
            count++;
    }
    
    if (count == 0)
        x=1;
    else
        x=0;
    
 return x;
}

int main() 
{
    int arr[100],i,n,pr=0;
    
    scanf("%d\n",&n);
    
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(prime(arr[i]) == 1)
            pr++; 
    }
    
    printf("%d",pr);
    
    return 0;
}
