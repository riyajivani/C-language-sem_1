int main()
{
    char s[5],d[11];

    printf("enter the string:\n\n");
    scanf("%4s%10s",s,d);
    printf("\n");
    printf("(a)%s %s\n",s,d);
    printf("(b)%s\n%s\n",s,d);
    printf("(c)%.1s.%.1s.",s,d);

    return 0;
}
