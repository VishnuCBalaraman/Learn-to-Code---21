//Write a C program to print the following number pattern.

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int n,i,j,k;
    
    scanf("%d",&n);
    
    for(i=n;i>=1;i--)
    {
        for(j=n;j>i;j--)
        {
            printf(" ");
        }
        for(k=1;k<=i;k++)
        {
            printf("%d",i);
        }
        
        printf("\n");
    }

        
    return 0;
}
