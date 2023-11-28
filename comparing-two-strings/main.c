/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    char str1[100];
    char str2[100];
    int i,j,t;
    
    printf("enter your first string:\n");
    gets(str1);
    
    printf("enter your second string:\n");
    gets(str2);
    
    for(i=0,j=0;str2[j]!='\0'||str1[i]!='\0';i++,j++)
    {
        if(str1[i]<str2[j])
        {
            t=-1;
            printf("given strings are not same.\n");
            break;
        }
        else if(str1[i]>str2[j])
        {
            t=1;
            printf("given strings are not same.\n");
            break;
        }
        else
        {
            t=0;
            printf("given strings are same.\n");
            break;
        }
    }
    
    return 0;
}




