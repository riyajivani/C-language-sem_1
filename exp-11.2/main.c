/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <string.h>

void mystrcat(char *s1,char *t1)
{
    int i,len,j;
    
    len=strlen(s1);
    i=len;
    
    for(j=0;*(t1+j)!='\0';j++)
    {
        *(s1+i)=*(t1+j);
        i++;
    }
    
    *(s1+i)='\0';
}


int main()
{
    char str[20],str1[20],*s,*t;
    
    printf("enter any two strings : \n");
    gets(str);
    gets(str1);
    
    s=str;
    t=str1;
    
    mystrcat(s,t);
    
    printf("\nfirst string after copying second string into first string:\n");
    printf("%s",str);
    
    return 0;
}



