#include <math.h>
int main()
{
    int x,a;
    float b;

    for(x=0;x<=100;x++)
    {
    a=x*x;
    b=sqrt(x);

    printf("number       square-root     square  \n\n");
    printf(" %d           %.2f            %d    \n\n",x,b,a);
    }

    return 0;
}
