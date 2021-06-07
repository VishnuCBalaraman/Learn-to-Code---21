//Write a C Program to display the product of two 2D arrays. Given values for both the 2D Arrays.

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int a[10][10],b[10][10],m1,n1,m2,n2,i,j,k,mul[10][10],sum=0;
    
    scanf("%d ",&m1);
    scanf("%d",&n1);
    
    for(i=0;i<m1;i++)
    {
        for(j=0;j<n1;j++)
        {
            scanf("%d ",&a[i][j]);
        }
    }
    
    scanf("%d ",&m2);
    scanf("%d",&n2);
    
    for(i=0;i<m2;i++)
    {
        for(j=0;j<n2;j++)
        {
            scanf("%d ",&b[i][j]);
        }
    }
    
    
    for(i=0;i<m1;i++)
    {
        for(j=0;j<n2;j++)
        {
            for(k=0;k<n1;k++)
            {
                sum = sum + a[i][k]*b[k][j];
            }
            mul[i][j] = sum;
            sum = 0;
        }
    }
    
    
    if(n1 == m2)
    {
        for(i=0;i<m1;i++)
        {
            for(j=0;j<n2;j++)
            {
                printf("%d ",mul[i][j]);
            }
            printf("\n");
        }
    }

    else
    {
        printf("ERROR");
    }

       
    return 0;
}
