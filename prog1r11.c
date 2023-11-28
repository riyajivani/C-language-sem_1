#include<stdio.h>
#include<math.h>

main()
{
    int x1,y1,x2,y2;
    float D;
    printf("Enter the values of x1,y1,x2 and y2\n");
    scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
    D=sqrt(((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1)));
    printf("the value of Distance between two points is %f",D);
    getch();
}
