//Write a C program to check whether a number present in the 1D array or not.

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int a[10],n,i,x,present=0;
    
    scanf("%d\n",&n);
    
    for(i=0;i<n;i++)
    {
        scanf("%d\n",&a[i]);
    }
    
    scanf("%d",&x);
    
    for(i=0;i<n ;i++)
    {
        if (x == a[i])
        {
            present++;
        }
    }
    
    if(present == 0)
    {
        printf("%d is not present in this array",x);
    }
    else
    {
        printf("%d is present in this array",x);
    }

       
    return 0;
}
