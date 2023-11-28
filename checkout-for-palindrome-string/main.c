/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    char str[1000];
    int i,length=0,c=0;
    
    printf("enter your string:\n");
    gets(str);
    
    for(i=0;str[i]!='\0';i++)
    {
        length=length+1;
        
    }
    
    for(i=0;i<length;i++)
    {      
            if(str[i]==str[length-i-1])
            c=c+1;
    }    
        
   
    
    if(c==length)
    printf("string is palindrome.");
    else
    printf("string is not palindrome.");
    
    return 0;
}

