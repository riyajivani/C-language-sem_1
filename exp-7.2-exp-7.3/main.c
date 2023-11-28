/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float InterestCalculation(float,float,int);
    float p,r,res;
    int n;
    
    printf("enter the value of principle amount,rate of interest and period.\n");
    scanf("%f %f %d",&p,&r,&n);
    printf("p=%f  r=%f  n=%d\n",p,r,n);          
    
    res=InterestCalculation(p,r,n);
    printf("Total amount: %f",res);

    return 0;
}

float InterestCalculation(float p,float r,int n)
{
    int i;
    float ans=p;
    
    for(i=1;i<=n;i++)
    ans=ans*(1+r/100);
    
    return ans;
}

/*p=1000,r=5,n=3
for 1st year
                                                    
p=1000*(1+0.05)
p=1050
                                                    
for 2nd year

p=1050*(1+0.05)
p=1102.05

for 3rd year

p=1102.5*(1+0.05)
p=1157.625

*/
