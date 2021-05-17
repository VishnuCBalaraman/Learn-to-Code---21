//WACP to accept marks of three subjects.. Calculate the percentage and respective grade according to following: Percentage >= 90% : Grade A Percentage >= 80% : Grade B Percentage >= 70% : Grade C Percentage >= 60% : Grade D Percentage >= 40% : Grade E Percentage < 40% : Grade F. 

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    
    int a,b,c;
    float per;
    
    scanf("%d %d %d ",&a,&b,&c);
    
    per = (a+b+c)/3.00;
    
    printf("%.2f\n",per);
    
    if(per>=90)
        printf("A");
    
    if(per>=80 && per<90)
        printf("B");
    
    if(per>=70 && per<80)
        printf("C");
    
    if(per>=60 && per<70)
        printf("D");
    
    if(per>=40 && per<60)
        printf("E");
    
    if(per<40)
        printf("F");
    
    
    return 0;
}
