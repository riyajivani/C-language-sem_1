main()
{
    float temp,cals,x;
    printf("enter the value of temprature in fahrenheit\n");
    scanf("%f",&temp);
    x=temp-32;
    cals=(x/9)*5;
    printf("value of temprature in calsius is %f",cals);
    getch();
}
