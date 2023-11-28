/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[100];
    char substr[100];
    int i,j,k=0,pos;
    
    printf("enter your first string:\n");
    gets(str);
    
    printf("enter your second string:\n");
    gets(substr);
    
    i=0;
    j=0;
    
    while(str[i]!=substr[j]&&str[i]!='\0')
    i++;
    
    pos=i;
    
    while(str[i]!=substr[j]&&substr[j]!='\0')
    {
        i++;
        j++;
    }
    
    if(str[i]=='\0')
    {
        printf("substring is not available.\n");
        exit(0);
    }
    
    while(substr[j]!='\0')
    {
        if(str[i]==substr[j])
        {
            i++;
            j++;
            k=1;
        }
        else
        {
            printf("substring is not available.");
            exit(0);
        }
    }
    
    if(k==1)
    printf("substring start from %d",pos);
    
    return 0;
}


