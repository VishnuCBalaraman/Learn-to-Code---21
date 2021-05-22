//Write a C program to print the Roots of a Quadratic Equation of the form ax^2+bx+c.

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    float a,b,c,det;
    float root1,root2;
    float x1,x2;
    
    scanf("%f %f %f",&a,&b,&c);
    
    det = (b*b-4*a*c);
    
    if(det>0 && a!=0)
    {
        printf("Distinct Real : ");
        root1 = (-b+sqrt(det))/(2*a);
        root2 = (-b-sqrt(det))/(2*a);
        printf("%.2f , %.2f",root1,root2);
    }
    
    if(det == 0 && a!=0)
    {
        printf("Equal Real: ");
        root1 = (-b)/(2*a);
        printf("%.2f , %.2f",root1,root1);
    }
    
    if(det<0 && a!=0)
    {
        printf("Complex: ");
        x1 = (-b)/(2*a);
        x2 = sqrt(-(det))/(2*a);
        
        printf("%.2f + i%.2f , ",x1,x2);
        printf("%.2f - i%.2f",x1,x2);
        
    }
    
    
    return 0;
}
