//Write a C Program to convert Fahrenheit to Celsius.

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    
    float a;
    float c;
    
    scanf("%f",&a);
    
    c = ((5.0000/9.0000) * (a - 32.0000)) ;
    
    printf("%.2f",c);

        
    return 0;
}
