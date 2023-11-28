/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a[100][100],b[100][100],c[100][100]={0};
    int ra,ca,rb,cb,rc,cc;
    int i,j,k;
    
    flag:
    printf("enter the number of rows of matix a:");
    scanf("%d",&ra);
    printf("enter the number of columns of matix a:");
    scanf("%d",&ca);
    printf("enter the number of rows of matix b:");
    scanf("%d",&rb);
    printf("enter the number of columns of matix b:");
    scanf("%d",&cb);
    
    if(ca==rb)
    {
        printf("\nenter matrix a.\n");
        for(i=1;i<=ra;i++)
        {
            for(j=1;j<=ca;j++)
            {
                printf("a[%d][%d]=",i,j);
                scanf("%d",&a[i][j]);
            }
        }
    
        printf("\nenter matrix b.\n");
        for(i=1;i<=rb;i++)
        {
            for(j=1;j<=cb;j++)
            {
                printf("b[%d][%d]=",i,j);
                scanf("%d",&b[i][j]);
            }
        }
    
        for(i=0;i<=ra;i++)
        {
            for(j=0;j<=cb;j++)
            {
                for(k=0;k<=rb;k++)
                {
                    c[i][j]=c[i][j]+a[i][k]*b[k][j];
                }
            }
        }
    
        printf("your matrix c:\n\n");
        for(i=1;i<=ra;i++)
        {
            for(j=1;j<=cb;j++)
            {
                printf("%d\t",c[i][j]);
            }
            
        printf("\n");
        }
    
    
    }   
     else
    {
        printf("please enter proper matrix.\n");
        goto flag;
    }
    
    return 0;
}

