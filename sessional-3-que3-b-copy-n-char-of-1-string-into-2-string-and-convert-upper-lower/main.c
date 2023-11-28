/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void Strcpy_riya(char*,char*,int);

int main()
{
    char str1[100],str2[100],*s1,*s2,p;
    int n;

    printf("enter your first string:");
    //gets(str1);
     scanf("%[^\n]",str1);
     p=getchar();
     
    printf("enter your second string:");
    //gets(str2);
     scanf("%[^\n]",str2);
     
    s1=str1;
    s2=str2;

    printf("how many character of string one you want to copy:");
    scanf("%d",&n);

    Strcpy_riya(s1,s2,n);

    printf("after copying last %d character of first string to second string your second string be look like :",n);
    printf("%s",str2);

    return 0;
}

void Strcpy_riya(char *s1,char *s2,int n)
{
    int i,j,l1,l2;

        for(i=0;*(s1+i)!='\0';i++);
        l1=i;

        for(i=0;*(s2+i)!='\0';i++);
        l2=i;

        for(i=l1-n;*(s1+i)!='\0';i++)
        {
            if(isupper(*(s1+i)))
            {
                *(s1+i)=tolower(*(s1+i));
            }
            else if(islower(*(s1+i)))
            {
                *(s1+i)=toupper(*(s1+i));
            }
            else
            {
                *(s1+i)=*(s1+i);
            }
        }

        for(i=l1-n,j=0;*(s1+i)!='\0';i++)
        {
            *(s2+l2+j)=*(s1+i);
            j++;
        }

        *(s2+l2+j)='\0';

        //printf("after copying last %d character of first string to second string your second string be look like :",n);

        //for(i=0;*(s2+i)!='\0';i++)
        //printf("%c",*(s2+i));

        //printf("\n");

        //for(i=0;*(s1+i)!='\0';i++)
        //printf("%c",*(s1+i));
}
