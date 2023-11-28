/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

union person
{
    char name[20];
    int date;
    int year;
    int month;
}p[10];

int main()
{
    int i,age,a,b,c,n;
    
    printf("enter total number of person whom details you want to enter.\n");
    scanf("%d",&n);
    
    for(i=0;i<n;i++)
    {
        printf("Enter your name:");
        scanf("%s",p[i].name);
        printf("name is : %s",p[i].name);
        printf("\n");
        
        printf("enter your birthdate:");
        scanf("%d",&p[i].date);
        a=p[i].date;
        
        printf("enter your birthmonth:");
        scanf("%d",&p[i].month);
        b=p[i].month;
        
        printf("enter your birthyear:");
        scanf("%d",&p[i].year);
        c=p[i].year;
        
        age=2022-p[i].year;
        
        if(age<=18)
        {
            printf("\ndate = %d , month = %d , year = %d\n\n",a,b,c);   
        }
        else if(age>60)
        {
            printf("\nold person\n\n");
        }
        else
        {
            printf("\nbirth year=%d\n\n",c);
        }
        
    }

    return 0;
}



