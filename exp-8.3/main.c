/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    
  void sort(int[],int);
  int a[100];
  int l,i;
  
  printf("enter your array length:\n");
  scanf("%d",&l);
  
  printf("enter your array element:\n");
  
  for(i=0;i<l;i++)
  {
        scanf("%d",&a[i]);
  }
  
   printf("before swapping:\n");
  
    for(i=0;i<l;i++)
        printf("%d \t",a[i]);
  
    sort(a,l);
    
    printf("\nafter swapping:\n");
  
    for(i=0;i<l;i++)
        printf("%d \t",a[i]);
  
    return 0;
    
}  

void sort(int b[],int size)
{
    int j,k,temp;
    
    for(j=1;j<=size-1;j++)
    {
        for(k=1;k<=size-j;k++)
        {
            if(b[k-1]>=b[k])
            {
                temp=b[k];
                b[k]=b[k-1];
                b[k-1]=temp;
            }
        }
    }
    
    /*printf("\nafter swapping:\n");
  
    for(j=0;j<size;j++)
     printf("%d \t",b[j]);*/
    
}




