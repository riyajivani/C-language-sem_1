/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <string.h>

void strncpy_riya(char s1[],char s2[],int n)
{
    int i=0,j;
    
    while(s1[i]!='\0')
    i++;
    
    for(j=strlen(s2)-n;j<=strlen(s2)-1;j++)
        s1[i++]=s2[j];
        
        s1[i]="\0";
}

int main()
{
    char s1[100],s2[100];
    int n;
    
    printf("enter your first string and second string.\n\n");
    gets(s1);
    gets(s2);
    
    printf("enter the number of character that you want to copy from string 2 to string 1\n");
    scanf("%d",&n);
    
    strncpy_riya(s1,s2,n);
    
    printf("aspected output is : \n %s",s1);

    return 0;
}
