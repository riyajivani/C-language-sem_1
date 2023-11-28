/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <math.h>
int main()
{
    char str[5];
    int i,l=0,temp;
    float sum=0;
    
    printf("enter your string:\n");
    
    gets(str);
    
    l=strlen(str);
    
    for(i=l-1;str[i]>=0;i--)
    {
        temp=str[i]-'0';
        sum=sum+(pow(10,l-i-1)*temp);
    }
    
        printf("%f",sum);
    
    return 0;
}

