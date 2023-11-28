/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100];
    char str2[100];
    int i,j,t;
    
    printf("enter your first string:\n");
    gets(str1);
    
    printf("enter your second string:\n");
    gets(str2);
    
    printf("%d",strcmp(str1,str2));
    
    return 0;
}
