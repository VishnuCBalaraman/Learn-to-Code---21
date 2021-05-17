//Write a C Program to determine the factorial of a number.

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int i,n,f=1;
    
    scanf("%d",&n);
    
    if(n!=0)
    {
        for(i=1;i<=n;i++)
        {
            f = f * i;
        }
        
        if(n>0)
            printf("%d",f);
        
        else
            printf("ERROR");
    }
    
    else
        printf("1");
    
    
    
       
    return 0;
}
    
