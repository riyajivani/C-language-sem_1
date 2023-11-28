/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a[3][3],b[3][3],c[3][3],*p1,*p2,*p3,i,j;
    
    printf("enter your first array elements.\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    
    printf("enter your second array elements.\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    
    p1=&a;
    p2=&b;
    p3=&c;
    
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            *(p3+3*i+j)= *(p1+3*i+j)+ *(p2+3*i+j);
        }
    }
    
    printf("addition of your two matrix:\n\n");
    
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",c[i][j]);
        }
        
        printf("\n");
    }
    
    return 0;
}

