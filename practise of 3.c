main()
{
    int a,b,c;
    printf("Enter the value of a,b and c\n");
    scanf("%d %d %d",&a,&b,&c);
    a>b?a>c?printf("max is %d",a):printf("max is %d",c):b>c?printf("max is %d",b):printf("max is %d",c);
    getch();
}
