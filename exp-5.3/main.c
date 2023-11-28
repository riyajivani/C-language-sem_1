/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int arr[100];
    int i,j,temp,n;
    
    printf("enter total number of array:\n");
    scanf("%d",&n);
    printf("enter your array:\n");
    
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    
    for(i=0;i<n;i++)
    {
        for(j=1;j<n-i;j++)
        {
            if(arr[j-1]>arr[j])
            {
                temp=arr[j];
                arr[j]=arr[j-1];
                arr[j-1]=temp;
            }
        }
    }
    
    printf("\nafter sorting\n");
    
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);    
    }
    
    return 0;
}

