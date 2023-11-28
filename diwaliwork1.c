main()
{
    int month,days;
    printf("Enter the value of days");
    scanf("%d",&days);
    month=days/30;
    days=days%30;
    printf("Months=%d Days=%d",month,days);
    getch();
}
