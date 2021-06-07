//Write a C program to print half pyramid of numbers.

#include <stdio.h>

int main()
{
    int r,i,j;

    scanf("%d",&r);

    if(r<1)
    {
        printf("ERROR");
    }

    else
    {
        for(i=1;i<=r;i++)
        {
            for(j=1;j<=i;j++)
            {
                printf("%d ",j);
            }
            printf("\n");
        }
    }
    
    return 0;
}
