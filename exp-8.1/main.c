/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int Exp(int,int);
    int x,y,z;
    
    printf("enter base and power:\n");
    scanf("%d %d",&x,&y);
    
     z=Exp(x,y);
    
     printf("%d",z);
    
     return 0;
}

int Exp(int a,int b)
{
    if(b>0)
     return (a*Exp(a,b-1));
    else
    return 1;
}

