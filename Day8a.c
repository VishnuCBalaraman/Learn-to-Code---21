//Write a C Program to identify if a number is a palindrome or not.

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int n1,q,rem,n2=0;
    
    scanf("%d",&n1);
    
    q = n1;
    
    while(q!=0)
    {
        rem = q % 10;
        n2 = n2*10 + rem;
        q = q/10;
        
    }
    
    if(n2==n1)
        printf("Yes");
    else
        printf("No");
    
    
    return 0;
}
