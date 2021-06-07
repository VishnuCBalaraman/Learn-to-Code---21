//Write a C program that reads and displays details of 4 students. The 'structure' should contain the RollNo(int), FirstName(string) and marks(float).

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

struct student
{
    int rollno;
    char firstname[20];
    float marks;
};

int main() 
{
    int i;
    struct student std[4];
    
    for(i=0;i<4;i++)
    {
        scanf("%d",&std[i].rollno);
        scanf("%s",std[i].firstname);
        scanf("%f",&std[i].marks);
    }
    
    for(i=0;i<4;i++)
    {
        printf("DETAILS OF ROLLNO %d\n",std[i].rollno);
        printf("NAME: %s\n",std[i].firstname);
        printf("MARKS: %.2f\n",std[i].marks);
    }
    
 
    return 0;
}
