//Write a C program to print inverted full pyramid of *.

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int r,i,j,k;

    scanf("%d",&r);

    if(r<1)
    {
        printf("ERROR");
    }

    else
    {
        for(i=1;i<=r;i++)
        {
            for(j=1;j<2*i-1;j++)
            {
                printf(" ");
            }

            for(k=1;k<=(2*(r+1-i))-1;k++)
            {
                printf("* ");
            }
            printf("\n");
        }
    }

    return 0;
}
