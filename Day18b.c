//Write a C program to input two numbers.If sum of the numbers is even, find the reverse of the sum .If sum is odd check whether the sum is prime or not.

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void sum_check(int n1 ,int n2)
{
    int sum,rem,s=0,prime=1,x,i;
    sum = n1 + n2;
    printf("%d\n",sum);
    
    x = sum;
    
    if(x % 2 == 0)
    {
        while(sum != 0)
        {
            rem = sum % 10;
            s = s*10 + rem;
            sum = sum/10;
        }
        printf("%d",s);
    }
    
    else if(x % 2 != 0)
    {
        for(i=2;i<=x-1;i++)
        {
            if(x % i == 0)
            {
                prime = 0;
                break;
            }
        }
       
        
        if(prime == 1)
            printf("Prime");
        
        else
            printf("Not prime");
       
        
    }
    
}

int main() 
{
    int a,b;
    
    scanf("%d %d",&a,&b);
    
    sum_check(a,b);    
    
    return 0;
}
