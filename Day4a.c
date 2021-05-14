//Write a C Program to verify if a given year is a leap year or no.

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int l;
     scanf("%d",&l);
    
    if((l%400==0)||((l%4==0)&&(l%100!=0)))
        printf("Yes");
    else
        printf("No");

       
    return 0;
}
