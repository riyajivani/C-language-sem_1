int main()
{
    int a,b,c;
    printf("Please enter the values of a and b\n");
    scanf("%d %d",&a,&b);
    printf("number before swapping:\n");
    printf("a=%d and b=%d\n",a,b);
    c=a;
    a=b;
    b=c;
    printf("number after swapping:\n");
    printf("a=%d and b=%d",c,a);
    return 0;
    }
