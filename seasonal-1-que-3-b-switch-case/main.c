/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int mark,top;
    
    printf("enter your mark:");
    top:
    scanf("%d",&mark);
    
    if(mark>=0&&mark<=100)
    {
        switch(mark)
        {
            case 10:
            case 9:
                printf("grade is A");
                break;
            
            case 8:
            case 7:
                printf("grade is B");
                break;
                
            case 6:
            case 5:
                printf("grade is C");
                
            default:
                 printf("grade is D");
                 
        }
    }
    
    else
        printf("please enter valid marks:\n");
        goto top;

    return 0;
}

