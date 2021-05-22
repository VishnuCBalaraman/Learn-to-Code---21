//Write a C Program to compute the multiplication table of 1 - 5 using do-while.

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n,i;
    
    do
    {
        scanf("%d",&n);
        printf("\n1.Table of 1\n2.Table of 2\n3.Table of 3\n4.Table of 4\n5.Table of 5\n6.Exit\n");
        
        if(n>0 && n<6)
        {
            for(i=1;i<=10;i++)
            {
                printf("%d ",i*n);
            }
            
        }
        if(n<0 || n>6)
            printf("Enter a valid option!");
    }while(n!=6);
   

        
    return 0;
}
