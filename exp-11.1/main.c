/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

void swap(int *r,int *z)
{
    int temp;
    
    temp=*r;
    *r=*z;
    *z=temp;
    
    //printf("after swaping the values of two numbers are %d and %d .",*r,*z);
}

int main()
{
    int x,y,*p,*q;
    
        printf("enter any two numbers:\n");
        scanf("%d %d",&x,&y);
    p=&x;
    q=&y;
    
    swap(p,q);
    
    printf("after swaping the values of two numbers are %d and %d .",*p,*q);
    
    return 0;
}

