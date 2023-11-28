/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <string.h>

int main()
{
    int i=0,j,k,p,flag=0;
    char str1[100],str2[100];
    
    printf("enter your main string.\n");
    gets(str1);
    
    printf("enter your sub string.\n");
    gets(str2);
    
    k=strlen(str1);
    p=strlen(str2);
    
    while(i<k)
    {
        for(i=0;i<k;i++)
        {
            if(str1[i]==str2[0])
            {
                break;
            }
        }
        
        for(j=0;j<p;i++,j++)
        {
            if(str1[i]==str2[j])
            flag=1;
        }
        
        if(flag==1)
        {
            printf("exist\n");
            printf("match is found from index %d.\n",j+1);
            break;
        }
        else
        {
            printf("not exist.\n");
        }
        
        i++;
        
    }

    return 0;
}

