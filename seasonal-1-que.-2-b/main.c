/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
   int n,i,j;
   
   printf("enter your number.\n");
   scanf("%d",&n);
printf("your pattern is:\n\n");
   for(i=1;i<=2*n;i++)
   {
       for(j=1;j<=i;j++)
       {
           if(i%2==1)
           printf("1");
           else
           printf("2");
       }
    printf("\n");
   }

    return 0;
}
