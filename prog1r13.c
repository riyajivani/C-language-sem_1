#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
  int x1=2,x2=5,y1=2,y2=6;
  float d,r,area;
  printf("the line joining the point (2,2) and (5,6) which lie on the circumference of a circle is the diameter of the circle.\n\n");
  d=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
  r=d/2;
  #define pi 3.14
  area=pi*r*r;
  printf("the area of given circle is %f",area);
  getch();
}
