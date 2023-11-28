/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <string.h>

int findchar(char *r,char z)
{
    int i,k=0;
    
    for(i=0;i<strlen(r);i++)
    {
        if(*(r+i)==z)
        k=i+1;
    }
    if(k=0)
    return 0;
    else
    return k;
}

int main()
{
    char str[100],*s,ch,p;
    int n,len;
    
    printf("enter your string:");
    gets(str);
    
    s=str;
    
    printf("enter character which you want to find:\n");
    p=getchar();
    ch=getchar();
    
    n=findchar(s,ch);
    
    printf("%d",n);

    return 0;
}

