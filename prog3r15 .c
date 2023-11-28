int main()
{
    int a,b,c,sum,avg;

    printf("enter any three digits:\n");
    scanf("%d %d %d",&a,&b,&c);

    sum=a+b+c;
    avg=sum/3;

    printf("sum of the values is %d .\n",sum);
    printf("average of the values is %d .\n",avg);

    printf("largest of the three is %d .\n",a>b?a>c?a:c:b>c?b:c);
    printf("smallest of the three is %d .\n",a<b?a<c?a:c:b<c?b:c);

    return 0;
}
