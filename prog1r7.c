int add(int,int);
int sub(int,int);

main()
{
    int p=20,q=10,r,s;
    r=add(p,q);
    printf("%d+%d=%d\n",p,q,r);
    s=sub(p,q);
    printf("%d-%d=%d\n",p,q,s);
    getch();
}

int add(int a,int b)
{
    int c;
    c=a+b;
    return(c);
}

int sub(int x,int y)
{
    int z;
    z=x-y;
    return(z);
}
