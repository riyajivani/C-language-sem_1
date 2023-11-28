/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

typedef struct Complex
{
     int real,img;
}cmp;

cmp subtract(cmp n1,cmp n2)
{
     cmp temp;

     if(n2.real>n1.real)
        temp.real=n2.real-n1.real;
     else
        temp.real=n1.real-n2.real;

     if(n2.img>n1.img)
        temp.img=n2.img-n1.img;
     else
        temp.img=n1.img-n2.img;

     return temp;
}

cmp multiply(cmp n1,cmp n2)
{
     cmp temp;

     temp.real=(n1.real*n2.real)-(n1.img*n2.img);
     temp.img=(n1.real*n2.img)+(n2.real*n1.img);

     return temp;
}

int main()
{
     cmp n1,n2,result1,result2;

     printf("Enter the first number\n");
     scanf("%d %d",&n1.real,&n1.img);

     printf("Enter the second number\n");
     scanf("%d %d",&n2.real,&n2.img);

     result1=subtract(n1,n2);
     result2=multiply(n1,n2);

     printf("substraction = %d + %di",result1.real,result1.img);
     printf("\nmultiplication = %d + %di",result2.real,result2.img);

    return 0;
}
