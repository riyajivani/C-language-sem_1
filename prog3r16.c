main()
{
    int code,call;
    float bill;

    printf("enter customer code and number of calls:\n");
    scanf("%d %d",&code,&call);

    bill=250+(call*1.25);

    printf("your Bill=%f",bill);

    getch();
}
