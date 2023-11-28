main()
{
    int p,q,r,s,t;
    float x;
    printf("enter the value of x\n\n");
    scanf("%f",&x);
    printf("\n");

    p=(int)x;
    q=p%10000;
    r=q%1000;
    s=r%100;
    t=s%10;

    printf("the number is %d\n",p);

    if(p>10000)
        printf("%d\n%d\n%d\n%d\n%d\n",p,q,r,s,t);
    else if(p>1000)
        printf("%d\n%d\n%d\n%d\n",p,q,r,s);
    else if(p>100)
        printf("%d\n%d\n%d\n",p,q,r);
    else if(p>10)
        printf("%d\n%d\n",p,q);
    else
        printf("%d/n",p);

    getch();
}
