int main()
{
    int x;

    printf("enter any digit.\n");
    scanf("%d",&x);

    if(x%2==0)
    {
        printf("%d is an even number.",x);
    }
    else
    {
        printf("%d is an odd number.",x);
    }

    return 0;
}
