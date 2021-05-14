//Write a C Program to find the maximum and minimum from three user inputted numbers.

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int x,y,z,max,min;
    
    scanf("%d %d %d",&x,&y,&z);
    
    max = min = x;
    
    if (y > max)
        max = y;
    
    if (z > max)
        max = z;
    
    if (y < min)
        min = y;
    
    if (z < min)
        min = z;
    
    
    
    printf("%d\n",max);
    printf("%d",min);
    
    
    return 0;
}
