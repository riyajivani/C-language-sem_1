/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    char str[1000],str1[1000];
    int i,length=0;
    
    printf("enter your string:\n");
    gets(str);
   
   //scanf("%[^\n]",str);
    
    for(i=0;str[i]!='\0';i++)
    {
        length=length+1;
    }
    
    for(i=0;i<length;i++)
    {
           str1[i]=str[length-i-1];
    }
    
    str1[i]!='\0';
    
    printf("%s",str1);

    return 0;
}


