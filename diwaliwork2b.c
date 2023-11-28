int main()
{
    int a,b;
    printf("Enter the value of a and b\n");
    scanf("%d %d",&a,&b);
    printf("\nvalues before swapping:\n");
    printf("a=%d and b=%d",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("\nvalues after swapping:\n");
    printf("a=%d and b=%d",a,b);
    return 0;
}
