//Write a C Program to read the values for a square 2D array and print its main/principal and secondary diagonals.

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int a[10][10],m,n,i,j;
    
    scanf("%d",&m);
    scanf("%d",&n);
    
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }         
    }
    
    if(m == n)
    {
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                if(i==j)
                    printf("%d ",a[i][j]);
            }  
            
        }
        
        printf("\n");
        
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                if(i+j == m-1)
                    printf("%d ",a[i][j]);
            }
        }
    }
    
    else
        printf("ERROR");
    
    
    
    
    return 0;
}
