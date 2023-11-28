#include <stdio.h>

typedef struct
{
    int acc_no;
    char name[20];
    int balance;
}account;

void inquiry(account bank[])
{
    for(int i=0; i<2; i++)
    {
        if(bank[i].balance<1000)
            printf("%d %s\n",bank[i].acc_no, bank[i].name);
    }
}

void withdraw(int *bal, int ammount)
{
    if(*bal<ammount)
        printf("not sufficient balance:\n");
    else
    {
        *bal-=ammount;
        printf("%d",*bal);
    }
}

int main()
{
    account arr[2];
    int ammount;
    int *ptr;
    //ptr=arr;

    for(int i=0; i<2; i++)
    {
        scanf("%d %s %d",&arr[i].acc_no, arr[i].name, &arr[i].balance);
    }

    for(int i=0; i<2; i++)
    {
        printf("%d %s %d\n",arr[i].acc_no, arr[i].name, arr[i].balance);
    }

    inquiry(arr);

    for(int i=0; i<2; i++)
    {
        ptr=&arr[i].balance;
        scanf("%d",&ammount);

        withdraw(ptr,ammount);
    }

}
