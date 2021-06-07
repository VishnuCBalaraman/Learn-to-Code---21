//Write a C program to find the minimum and maximum element of an array.

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int a[10],n,i;
    int min,max;
    
    scanf("%d",&n);
    
    for(i=0;i<n;i++)
    {
        scanf("%d ",&a[i]);
    }
    
    min = max = a[0];
    
    for(i=1;i<n;i++)
    {
        if(a[i]>max)
        {
            max = a[i];
        }
        
        else if(a[i]<min)
        {
            min = a[i];
        }
    }
    
    printf("%d\n",min);
    printf("%d",max);

     
    return 0;
}
