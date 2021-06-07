//Write a program in C to Find the Frequency of Characters.

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    char a[100],x;
    int i,count=0;
    
    fgets(a,100,stdin);
    
    scanf("%c",&x);
    
    for(i=0;i<strlen(a);i++)
    {
        if(a[i] == x)
        {
            count ++;
        }
    }
    
    printf("%d",count);
    
    return 0;
}
