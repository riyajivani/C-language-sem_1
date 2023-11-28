/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a[100][100],i,j,row,col,*p,k=0;
    
    printf("enter no. of rows and columns:\n");
    scanf("%d %d",&row,&col);
    
    printf("\nenter your matrix elements:\n");
    
    p=a;
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            scanf("%d",(*(a+i)+j));
        }
    }
    
    printf("\n\nyour matrix is :\n\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%d\t",*(*(a+i)+j));
        }
    printf("\n");
    }
    
    printf("\n\ntranspose of your matrix is :\n\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%d\t",*(*(a+j)+i));
        }
    printf("\n");
    }
    
     for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            if(*(*(a+i)+j) == *(*(a+j)+i))
            k++;
        }
    }
    
    if(k==row*col)
    printf("\nyour matrix is symmetric.");
    else
    printf("\nyour matrix is not symmetric.");
    
    return 0;
}

