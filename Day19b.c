//Write a C program to find the number of words in a string. Also reverse string.

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void string(char a[100])
{
    int i,count=0;
    for(i=0; a[i]!='\0'; i++)
    {
        if(a[i] == ' ')
            count++;
    }
    printf("no of words = %d\n",count+1);
    
    for(i=strlen(a)-1;i>=0;i--)
    {
        printf("%c",a[i]);
    }
}

int main() 
{
    char arr[100];
    
    fgets(arr,100,stdin);
    
    string(arr);
       
    return 0;
}
