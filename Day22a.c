//Write a C Program to read an array, then display the array twice. Once using the index, and the other time using the array pointer.

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int arr[100],n,i;
    
    scanf("%d",&n);
    
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("DISPLAYING USING INDEX: ");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    
    for(i=0;i<n;i++)
    {
        scanf("%d",arr+i);
    }
    printf("\nDISPLAYING USING POINTERS: ");
    for(i=0;i<n;i++)
    {
        printf("%d ",*(arr+i));
    }
  
    return 0;
}
