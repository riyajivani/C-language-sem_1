int main()
{
    int raws,i,j;
        printf("enter the number of raws\n");
        scanf("%d",&raws);
        printf("\npresenting the right angle triangle\n");

        for(i=1;i<=raws;i++)
        {
            for(j=1;j<=i;j++)
                {
                    printf("* ");
                }
                    printf("\n");
        }
    return 0;
}
