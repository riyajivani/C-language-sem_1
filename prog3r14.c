int main()
{
    int m,n;

    printf("enter the value of m and n.\n");
    scanf("%d %d",&m,&n);

    if(m%n==0)
    {
        printf("%d is multiple of %d.",m,n);
    }
    else
    {
        printf("%d is not multiple of %d.",m,n);
    }
    return 0;
}
