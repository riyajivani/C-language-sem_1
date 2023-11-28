#include <stdio.h>
#include <math.h>

#define pi 3.14
#define max 180
int main()
{
    int i;
    float x,y,z;

            printf("x(degrees)  sin(x)    cos(x) \n");

    while(i<=max)
        {
            x=(pi/max)*i;
            y=sin(x);
            z=cos(x);


            printf("   %d         %f        %f   \n",i,y,z);

            i+=15;
        }

    return 0;
}
