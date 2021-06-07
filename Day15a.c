//Write a C Program to read a 2D array. Then, search for a particular given element. If found, display each occurrence of that element with its position(s).

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main() 
{
    int a[10][10],m,n,i,j,x,count=0;

    scanf("%d %d",&m,&n);
    

    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d ",&a[i][j]);
        }
    }

    scanf("%d",&x);

    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i][j] == x)
            {
                printf("Element found at (%d,%d)\n",i,j);   
            } 
            else
            {
                count++;
            }
        }       
    }
    
    if(count == m*n)
        printf("Element not found");
   
 return 0;   
}
