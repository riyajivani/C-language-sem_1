/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

union book
{
    int ISBN_no;
    char title[20];
    float price;
}b1;

int main()
{
        printf("enter the book ISBN number:");
        scanf("%d",&b1.ISBN_no);
        printf("ISBN number:%d\n",b1.ISBN_no);
        
        printf("\nenter the book title:");
        scanf("%s",b1.title);
        printf("title :%s\n",b1.title);
        
        printf("\nenter the book price:");
        scanf("%f",&b1.price);
        printf("price:%f\n",b1.price);
    
    return 0;
}


