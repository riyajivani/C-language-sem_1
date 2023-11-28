/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int row,k,s,i,c=65;
    scanf("%d",&row);
    
    for(i=1; i<=row; i++)
    {
        c=65;
        for(k=0;k<=row-i;k++)
        {
            printf("%c ", c);
            c++;
        }
        for(s=0; s<2*i-3; s++)
        {
            printf("  ");
        }
        if(i==1)
        {
            c=c-2;
            for(k=1; k<=row-i;k++)
            {
                printf("%c ",c);
                c=c-1;
            }
        }
        else
        {
            for(k=0; k<=row-i; k++)
            {
                c=c-1;
                printf("%c ",c);
            }
        }
        printf("\n");
    }
    return 0;
}

