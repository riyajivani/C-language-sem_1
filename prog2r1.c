int main()
{
    int n;
    float x,sum=0.0,y;
    printf("please enter the integer value of n. \n\n");
    scanf("%d",&n);
    printf("\n\n");
    printf("series is: 1+1/2+1/3.....+1/n. and here n=%d\n\n",n);
    for(x=1.0;x<=n;x++)
    {
        y=1/x;
        sum=sum+y;
    }
    printf("sum of the given series is: %f",sum);
    return 0;
}
