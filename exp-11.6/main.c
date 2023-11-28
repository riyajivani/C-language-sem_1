/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

struct student
{
    int id;
    char name[100];
    float percentage;
}stud[100],*ptr;

int main()
{
    int i,n,max=0,count;
    
    printf("enter number of total students\n");
    scanf("%d",&n);
    
    ptr=stud;
    
    for(i=0;i<n;i++)
    {
        printf("\nenter student name:");
        scanf("%s",(ptr+i)->name);
        
        printf("enter student id:");
        scanf("%d",&(ptr+i)->id);
        
        printf("enter student percentage:");
        scanf("%f",&(ptr+i)->percentage);
    }
    
    printf("\nid\tname\t\tpercentage\n");
    for(i=0;i<n;i++)
    {
        printf("\n%d\t%s\t\t%f\n",(ptr+i)->id,(ptr+i)->name,(ptr+i)->percentage);
    }
    
    printf("\nstudent info. who got the highest percentage.\n");
    max=ptr->percentage;
    for(i=0;i<n;i++)
    {
        if(max<(ptr+i)->percentage)
        max=(ptr+i)->percentage;
    }
    
    for(i=0;i<n;i++)
    {
        if(max==(ptr+i)->percentage)
        printf("\n%d\t%s\t\t%f\n",(ptr+i)->id,(ptr+i)->name,(ptr+i)->percentage);
    }
    
    return 0;
}


