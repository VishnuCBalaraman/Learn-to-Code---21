//Write a C Program to arrange the elements in ascending order.

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int arr[10],n,i,j,max;
    
    scanf("%d\n",&n);
    
    for(i=0;i<n;i++)
    {
        scanf("%d ",&arr[i]);
    }
    
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                max = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = max;
            }
        }
    }
    
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    
    
    return 0;
}
