int main()
{
    int a,b,c;

    printf("enter any three digits:\n\n");
    scanf("%d %d %d",&a,&b,&c);

    printf("the largest digit is %d",a>b?a>c?a:c:b>c?b:c);

    return 0;
}
