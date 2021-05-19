//Write a C Program to display a calculator with a menu consisting of each operation to perform on the numbers using Switch Case statement.

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int n,a,b;
    
    scanf("%d",&n);
    scanf("%d %d",&a,&b);
    
    printf("1.Addition\n");
    printf("2.Subtraction\n");
    printf("3.Multiplication\n");
    printf("4.Division\n");
    
    switch(n)
    {
        case 1: printf("%d",a+b);
            break;
            
        case 2: printf("%d",a-b);
            break;
            
        case 3: printf("%d",a*b);
            break;
            
        case 4: if(b>0)
        {
            printf("%.1f",a/(float)b);
        }
            else
            {
                printf("Cannot be determined");    
            }
                     
    }
                                        
    
    return 0;
}
