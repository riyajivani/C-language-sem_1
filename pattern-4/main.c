/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int i,j,n; //variable declaration
    
    printf("enter the number of rows:");
     scanf("%d",&n);
    
    for(i=1;i<=n;i++)
    {
        for(j=n;j>=i;j--)
        {
            printf(" ");
        }
        
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
        
    printf("\n");
    
    }
    
    return 0;
}

