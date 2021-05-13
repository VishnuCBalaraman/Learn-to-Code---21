//Write a C Program to perform all four basic Mathematical Operations on two numbers taken from user input.

#include <stdio.h>
#include <math.h>

int main() 
{ 
     int a,b;

    scanf("%d",&a);
    scanf("%d",&b);

    printf("%d\n",a+b);
    printf("%d\n",a-b);
    printf("%d\n",a*b);
    printf("%.2f",a/(float)b);
    return 0;
}
