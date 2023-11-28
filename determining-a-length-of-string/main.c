/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
int main()
{
    char str[50];
    int i,length=0;
    
    printf("enter your statement:\n");
    
            gets(str);
            
    for(i=0;str[i]!='\0';i++)
    {
        length++;
    }
    
    printf("length pf string is %d",length);

    return 0;
}
