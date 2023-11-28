int main()
{
    int a,b,c,max;
    printf("enter the values of a,b and c\n");
    scanf("%d %d %d",&a,&b,&c);
    printf("max=%d",a>b?a>c?a:c:b>c?b:c);
    return 0;
}
