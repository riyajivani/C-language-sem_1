/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

struct student
{
    int id_no;
    char name[100];
    float mark1;
    float mark2;
    float mark3;
    float total;
}stud[100];

int main()
{
    int i,n,max;
    
    printf("enter number of total students\n");
    scanf("%d",&n);
    printf("enter name of student and mark of three subjects:\n");
    
    for(i=0;i<n;i++)
    {
        scanf("%s%f%f%f",stud[i].name,&stud[i].mark1,&stud[i].mark2,&stud[i].mark3);
    }
    
    for(i=0;i<n;i++)
    {
         stud[i].total=stud[i].mark1+stud[i].mark2+stud[i].mark3;
        printf("\n%d\t%s\t\t%f\t%f\t%f\t%f\n",i,stud[i].name,stud[i].mark1,stud[i].mark2,stud[i].mark3,stud[i].total);
    }
    
    printf("\nstudent info. who got the highest total.\n");
    max=stud[0].total;
    for(i=0;i<n;i++)
    {
        if(max<stud[i].total)
        max=stud[i].total;
    }
    
    for(i=0;i<n;i++)
    {
        if(max==stud[i].total)
        printf("\n%d\t%s\t\t%f\t%f\t%f\t%f\n",i,stud[i].name,stud[i].mark1,stud[i].mark2,stud[i].mark3,stud[i].total);
    }
    
    return 0;
}


