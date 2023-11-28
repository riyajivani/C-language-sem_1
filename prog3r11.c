int main()
{
    int n,a,s=0;

    printf("enter a number:\n");
    scanf("%d",&n);

    while(n>0)
    {
        a=n%10;
        s=s+a;
        n=n/10;
    }

    printf("\nsum is:%d",s);
    return 0;
}
