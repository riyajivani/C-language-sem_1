main()
{
    float u,a,t,d;
    int n,i;
    printf("enter the number of intervals:\n");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        printf("enter the value of velocity,acceleration and interval of time:\n\n");
        scanf("%f %f %f",&u,&a,&t);

            d=d+((u*t)+((a*t*t)/2));
    }
    printf("the value of distance is %f.",d);
    getch();
}
