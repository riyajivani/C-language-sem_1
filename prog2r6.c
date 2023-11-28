int main()
{
    int x,num,count1=0,count2=0;
    printf("please enter the set of ten numbers(may be positive or nagative):\n\n");
    for(x=1;x<=10;x++)
    {
        scanf("%d",&num);
        if(num<=0)
        {
            count1=count1+1;
        }
        else
        {
            count2=count2+1;
        }
    }
    printf("the number of negative number is %d.\n",count1);
    printf("the number of positive number is %d.\n",count2);
    return 0;
}
