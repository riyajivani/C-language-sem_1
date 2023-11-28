/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<conio.h>

int Max(int*,int);
int Min(int*,int);
void Swap_pos(int*,int);

int main()                                  // IN CODE BLOCKS...
{
     int arr[100],*ptr,n,i,max,min; //,max_pos,min_pos,z;

     printf("enter array size:");
     scanf("%d",&n);

     ptr=arr;

     printf("\nenter your array:\n");

     for(i=0;i<n;i++)
     {
          scanf("%d",(ptr+i));
     }

     printf("\nbefore swapping position:\n");

     for(i=0;i<n;i++)
     {
          printf("%d\t",*(ptr+i));
     }

     printf("\n\n");

     max=Max(ptr,n);
     min=Min(ptr,n);
     Swap_pos(ptr,n);

     /*for(i=1;i<n;i++)
     {
          if(*(ptr+i)>max)
          {
               max=*(ptr+i);
               max_pos=i;
          }

          if(*(ptr+i)<min)
          {
               min=*(ptr+i);
               min_pos=i;
          }
     }

     z=*(ptr+min_pos);
     *(ptr+min_pos)=*(ptr+max_pos);
     *(ptr+max_pos)=z;*/

     printf("max=%d\n",max);
     printf("min=%d\n",min);

     //z=arr[min_pos];
     //arr[min_pos]=arr[max_pos];
     //arr[max_pos]=z;

     printf("\nafter swapping position:\n");

     for(i=0;i<n;i++)
     {
          printf("%d\t",*(ptr+i));
     }

     return 0;
}

int Max(int *ptr,int n)
{
     int i,max=*ptr;

     for(i=0;i<n;i++)
     {
          if(max<*(ptr+i))
               max=*(ptr+i);
     }

     return max;
}

int Min(int *ptr,int n)
{
     int i,min=*ptr;

     for(i=0;i<n;i++)
     {
          if(min>*(ptr+i))
               min=*(ptr+i);
     }

     return min;
}

void Swap_pos(int *ptr,int n)
{
     int i,max=*(ptr+0),max_pos,min=*(ptr+0),min_pos,c;

     for(i=0;i<n;i++)
     {
          if(max<*(ptr+i))
           {
                max=*(ptr+i);
                max_pos=i;
           }
     }

     for(i=0;i<n;i++)
     {
          if(min>*(ptr+i))
          {
                min=*(ptr+i);
                min_pos=i;
          }
     }

     c=*(ptr+min_pos);
     *(ptr+min_pos)=*(ptr+max_pos);
     *(ptr+max_pos)=c;

     /*printf("\n after swapping position:\n");

     for(i=0;i<n;i++)
     {
          printf("%d\t",*(ptr+i));
     }*/
}

