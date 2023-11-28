/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int i,j,n,k=1,m=0;
    
    printf("enter the number of rows:");
    scanf("%d",&n);
    
    for(i=1;i<=n;i++)
    {
        if(i%2==0)
        {
            for(j=1;j<=i;j++)
            {
            if(j%2==0)
                printf("%d",k);
            else
                printf("%d",m);
            }
        }
        else
        {
            for(j=1;j<=i;j++)
            {
                if(j%2==0)
                    printf("%d",m);
                else
                    printf("%d",k);
            }
        }
            
        printf("\n");
    }

    return 0;
}


