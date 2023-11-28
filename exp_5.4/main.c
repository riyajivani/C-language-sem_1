/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int i,num[100],n,max,min,max_pos=0,min_pos=0,c;
    
    printf("enter total numbers. \n");
    scanf("%d",&n);
    printf("enter number of index. \n");
    
    for(i=0;i<n;i++)
    {
        scanf("%d",&num[i]);
    }
    
    printf("before swaping your index are : \n");
    
    for(i=0;i<n;i++)
    {
        printf("%d ",num[i]);
    }
    printf("\n");
    
    min=num[0];
    max=num[0];
    
    for(i=1;i<n;i++)
    {
        if(num[i]>max)
        {
            max=num[i];
            max_pos=i;
        }
        
        if(num[i]<min)
        {
            min=num[i];
            min_pos=i;
        }
    }
    
    printf("maximum and minimum from given number is %d and %d. \n",max,min);
    
    c=num[min_pos];
    num[min_pos]=num[max_pos];
    num[max_pos]=c;
    
    printf("after swaping your index are : \n");
    
    for(i=0;i<n;i++)
    printf("%d ",num[i]);

    return 0;
}

