void main()
{
    int x,y,z,a;
    printf("enter the value of x,y and z\n");
    scanf("%d %d %d",&x,&y,&z);
    a=x;
    x=y;
    y=z;
    z=a;
    printf("the value of x,y and z is %d %d %d",x,y,z);
}
