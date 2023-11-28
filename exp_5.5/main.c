/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int num[100];
    int i,n,pos,el;
    
    printf("enter total numbers. \n");
    scanf("%d",&n);
    printf("enter number of index. \n");
    
    for(i=0;i<n;i++)
    {
        scanf("%d",&num[i]);
    }
    
    printf("enter the element and position of element. \n ");
    scanf("%d %d",&el,&pos);
    
    for(i=n;i>pos;i--)
    num[i]=num[i-1];
    
    num[pos]=el;
    
    printf("after adding new element your numbers are : \n");
    
    for(i=0;i<=n;i++)
    printf("%d ",num[i]);
    
    return 0;
}
