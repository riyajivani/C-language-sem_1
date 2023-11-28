#include<math.h>
int main()
{
    float L,R,C,freq;

    printf("enter the value of inductance L.\n");
    scanf("%f",&L);
    printf("\n");

    printf ("enter the value of resistance R.\n");
    scanf("%f",&R);
    printf("\n");

    printf("enter the value of capacitance C.\n");
    scanf("%f",&C);
    printf("\n");

    for(C=0.01;C<=0.1;C=C+0.01)
    {
        freq=sqrt((1/(L*C))-((R*R)/(4*C*C)));

        printf("Frequency is:%f\n\n",freq);
    }

    return 0;
}
