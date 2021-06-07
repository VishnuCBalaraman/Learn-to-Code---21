//Write a C program to find the frequency of odd and even numbers in the 1D array.

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int a[10],n,i,even,odd;
    
    scanf("%d",&n);
    
    even = 0;
    odd = 0;
    
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    
    for(i=0;i<n;i++)
    {
        if(a[i]%2 == 0)
        {
            even++;
        }
            
        
        else
        {
            odd++;
        }
        
    }
    
    printf("%d\n",even);
    printf("%d",odd);
     
    return 0;
}
