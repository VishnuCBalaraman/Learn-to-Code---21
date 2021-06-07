//Write a C program to count and display the number of Vowels, Consonants and spaces in a string.

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    char s[200];
    int v=0,c=0,sp=0,i;
    
    fgets(s,200,stdin);
    
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
        {
            v++;
        }
        
        if(s[i]!='a' && s[i]!='e' && s[i]!='i' && s[i]!='o' && s[i]!='u' && s[i]!=' ')
        {
            c++;
        }
    }
        
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i] == ' ')
        {
            sp++;
        }      
    }
        
    
    
    printf("%d\n",v);
    printf("%d\n",c);
    printf("%d",sp);
    
   
    return 0;
}
