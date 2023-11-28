/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

void swap(char**,char**);

int main()
{
    //char *s1="Hello",*s2="World",p;
    char str1[100],str2[100],*s1,*s2;
    printf(" enter your first string:");
    gets(str1);
    printf(" enter your second string:");
    gets(str2);
    s1=str1;
    s2=str2;
    swap(&s1,&s2);
    printf("%s %s",s1,s2);

    return 0;
}

void swap(char **s11,char **s22)
{
    char *temp;
   
    temp=*s11;
    *s11=*s22;
    *s22=temp;
}





