#include<stdio.h>
#include<conio.h>
#include<math.h>

void main()
{
    int x1=0,y1=0,x2=4,y2=5;
    float r,per,area;
    printf("point (0,0) is the center of circle and a point on the circumference of a circle is (4,5).\n\n");
    #define pi 3.14
    r=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
    per=2*pi*r;
    printf("perimeter of the given circle is %f\n\n",per);
    area=pi*r*r;
    printf("area of a given circle is %f\n",area);
    getch();
}
