//Write a C program to find the second maximum element in an array of integer elements.

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int arr[100],n,i,max1,max2;
    
    scanf("%d",&n);
    
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    
    max1 = -100;
    max2 = -100;
    
    for(i=0;i<n;i++)
    {
        if(arr[i]>max1)
        {
            max2 = max1;
            max1 = arr[i];
        }
        
        else if(arr[i]>max2 && arr[i]<max1)
        {
            max2 = arr[i];
        }
    }
    
    printf("%d",max2);
    
   
    return 0;
}
