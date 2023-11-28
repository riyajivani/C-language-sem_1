/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    char str[100];
    int i,j=0;
    
    printf("enter your sring (in uppercase):\n");
    scanf("%[^\n]",str);
    
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]>=65&&str[i]<=90)
        {
            str[i]=str[i]+32;
            printf("%c",str[i]);    //logic for convert upper to lower 
        }
        
        else if(str[i]>=97&&str[i]<=122)
        {
            str[i]=str[i]-32;
            printf("%c",str[i]);   //(logic for convert lower to upper)
        }
        
        else if(str[i]==32)
        {
            printf(" ");
        }
    }
    
    for(i=0;str[i]!='\0';i++)
    {
        j=j+1;
    }
    
    printf("\n\ntotal number of characters in given string is %d",j);

    return 0;
}


