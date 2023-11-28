main()
{
    int a,b,c;
    float x,y;
    printf("Enter the value of a,b,c\n");
    scanf("%d %d %d",&a,&b,&c);
    y=b-c;
    x=a/y;
    printf("the value of x is %f\n",x); // here, we take a=300,b=70,c=70 so we get the value of y is 0 and the value of x is not in range.
    getch();
}
