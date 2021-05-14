//Write a C Program to determine the area of a square, circle and a triangle taking length, radius and base and height respectively from user input.

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int l,r,b,h;
    
    scanf("%d",&l);
    scanf("%d",&r);
    scanf("%d %d",&b,&h);
    
    
    
    printf("%d\n",l*l);
    printf("%.1f\n",3.14*r*r);
    printf("%.2f",.5*b*h);

        
    return 0;
}
