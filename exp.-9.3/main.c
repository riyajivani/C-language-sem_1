/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <string.h>

struct product
{
    int id;
    char name[20];
    float price;
}prod[100];

void sortbyname(struct product prod[],int z)
{
    int j,r;
    struct product temp;
    
    for(j=1;j<=z;j++)
    {
        for(r=1;r<=z-j;r++)
        {
            if(strcmp(prod[r-1].name,prod[r].name)>0)
            {
                temp=prod[r-1];
                prod[r-1]=prod[r];
                prod[r]=temp;
            }
        }
    }
    
    printf("after swapping:\n");
    printf("id\tname\t\tprice\n");
    
    for(j=0;j<z;j++)
    {
        printf("%d\t%s\t\t%f\n",prod[j].id,prod[j].name,prod[j].price);
    }
}

int main()
{
    int n,i,id;
    
    printf("enter total number of product.\n");
    scanf("%d",&n);
    
    for(i=0;i<n;i++)
    {
        printf("enter product id:");
        scanf("%d",&prod[i].id);
        
        printf("enter product name:");
        scanf("%s",&prod[i].name);
        
        printf("enter product prices:");
        scanf("%f",&prod[i].price);
    }
    
    printf("\n\n");
    printf("before swapping:\n");
    printf("id\tname\t\tprice\n");
    
    for(i=0;i<n;i++)
    {
       printf("%d\t%s\t\t%f\n",prod[i].id,prod[i].name,prod[i].price);
    }
    
    sortbyname(prod,n);
    
    return 0;
}



