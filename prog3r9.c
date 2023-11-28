#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
    float dmd_rate,stp_cost,hl_cost,eoq,tbo;

    printf("enter the value of demand rate(item per unit time)\n");
    scanf("%f",&dmd_rate);
    printf("\n");

    printf("enter the value of setup costs(per order)\n");
    scanf("%f",&stp_cost);
    printf("\n");

    printf("ente the value of holding cost(per item per unit time)\n");
    scanf("%f",&hl_cost);
    printf("\n");

    eoq=sqrt((2*dmd_rate*stp_cost)/hl_cost);
    tbo=sqrt((2*stp_cost)/(dmd_rate*hl_cost));

    printf("the economic order quantity is %f\n",eoq);
    printf("the time between orders is %f",tbo);

    return 0;
}
