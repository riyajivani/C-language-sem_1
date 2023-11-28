/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float Add(float,float);
    float Sub(float,float);
    float Mul(float,float);
    float Div(float,float);
    
    float x,y;
    char p,q,r;
    
    //flag1:
    printf("enter two numbers:\n");
    scanf("%f %f",&x,&y);
    
    flag2:
    printf("enter operation which you want to operate:\n");
    r=getchar();
    scanf("%c",&p);
    q=getchar();
    
    if(p=='+')
    {
        printf("addition is %f",Add(x,y));
    }
    else if(p=='-')
    {
        printf("substraction is %f",Sub(x,y)); 
    }
    else if(p=='*')
    {
        printf("multiplication is %f",Mul(x,y));
    }
    else if(p=='/')
    {
         //if(y!=0)
         printf("divison is %f",Div(x,y));
         //else
         //printf("please enter proper numbers:\n");
         //goto flag1;
    }
    else
    {
        printf("please enter proper sign.\n");
        goto flag2;
    }

    return 0;
}

float Add(float a,float b)
{
    float c;
    c=a+b;
    return c;
}

float Sub(float a,float b)
{
    float c;
    c=a-b;
    return c;
}

float Mul(float a,float b)
{
    float c;
    c=a*b;
    return c;
}

float Div(float a,float b)
{
    float c;
    if(b!=0)
    {
        c=a/b;
        return c;
    }
    else
    return 0;
    
}


