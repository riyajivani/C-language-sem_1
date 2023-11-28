/****************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
   char str[1000];
   int i=0;
   
   printf("enter your string:\n");
   gets(str);
   
   printf("your string is:\n");
   
    while(str[i]!='\0')
    {
       printf("%c",str[i]);  //or printf("%s",str);
       i++;
    }
   
   return 0;
}

