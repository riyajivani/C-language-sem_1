#include<stdio.h>
#include<math.h>

main()
{
    int a,b,c;
    float S,A;
    printf("Enter the alue of a,b and c\n");
    scanf("%d %d %d",&a,&b,&c);
    S=(a+b+c)/2;
    A=sqrt(S*(S-a)*(S-b)*(S-c));
    printf("area of triangle is %f",A);
    getch();
}
