int main()
{
    int x,y,c;
    float a,b;

    printf("enter the value of x and y.\n");
    scanf("%d %d",&x,&y);
    printf("\n");

    a=(float)(x+y)/(x-y);
    b=(x+y)/2.0;
    c=(int)(x+y)*(x-y);

    printf("results are: %f %f %d",a,b,c);

    return 0;
}
