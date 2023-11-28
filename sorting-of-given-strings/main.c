/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <string.h>

int main()
{
    int i,j,count;
    char str[100][100],temp[100];
    
    printf("enter the number of strings that you are going to enter.\n");
    scanf("%d",&count);
    
    printf("enter string one by one.\n\n");
    
    for(i=0;i<=count;i++)
    {
        gets(str[i]);
    }
    
    for(i=0;i<=count;i++)
    {
        for(j=i+1;j<=count;j++)
        {
            if(strcmp(str[i],str[j])>0)
            {
                strcpy(temp,str[i]);
                strcpy(str[i],str[j]);
                strcpy(str[j],temp);
            }
        }
    }
    
    printf("\norder of sorted strings:\n");
    for(i=0;i<=count;i++)
    puts(str[i]);

    return 0;
}
