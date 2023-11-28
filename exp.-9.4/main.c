/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

struct product
{
    int id;
    float quantity;
    char name[20];
    float price;
}prod[100];
 

void update(struct product prod[],int id1,char e,int z)
{
    
    int j;
    
    for(j=0;j<z;j++)
    {
        if(id1==prod[j].id)
        {
            if(e=='+')
            {
                printf("enter quantity that you want to increse :");
                scanf("%f",&prod[j].quantity);
                //prod[j].price=prod[j].price*prod[j].quantity;
                
                printf("\nlist of your product after update:\n\n");
        
                printf("id\tname\t\ttotal price\n");
    
                for(j=0;j<z;j++)
                {
                printf("%d\t%s\t\t%f\n",prod[j].id,prod[j].name,prod[j].price*prod[j].quantity);
                }
                
            }
            
            if(e=='-')
            {
                printf("enter quantity that you want to decrese :");
                scanf("%f",&prod[j].quantity);
                //prod[j].price=prod[j].price*prod[j].quantity;
                
                printf("\nlist of your product after update:\n\n");
        
                printf("id\tname\t\ttotal price\n");
    
                for(j=0;j<z;j++)
                {
                printf("%d\t%s\t\t%f\n",prod[j].id,prod[j].name,prod[j].price*prod[j].quantity);
                }
                    
            }
        }
        
    }    

}


int main()
{
    int n,i,id;
    char a,b,c,d;
    
    printf("enter total number of product.\n");
    scanf("%d",&n);
    
    for(i=0;i<n;i++)
    {
        printf("\nenter product id:");
        scanf("%d",&prod[i].id);
    
        printf("enter product name:");
        scanf("%s",&prod[i].name);
        
        printf("enter single product prices:");
        scanf("%f",&prod[i].price);
        
        printf("enter product quantity:");
        scanf("%f",&prod[i].quantity);
    }
    
    printf("list of your product before update:\n\n")
    printf("\nid\tname\t\ttotal price\n");
    
    for(i=0;i<n;i++)
    {
        printf("%d\t%s\t\t%f\n",prod[i].id,prod[i].name,prod[i].price*prod[i].quantity);
    }
    
    printf("\nif you want to update quantity of any product select y fot yes and n for no.\n");
    b=getchar();
    a=getchar();
    
    if(a=='y'||a=='Y')
    {
        printf("enter id of product which quantity you want to change:");
        scanf("%d",&id);
        
        printf("if you want to increse quantity then enter + and if you want to decrese quantity then enter -\n");
        c=getchar();
        d=getchar();
        
        update(prod,id,d,n);
        
    }
    else if(a=='n'||a=='N')
    {
        printf("\nlist of your product:\n\n");
        
        printf("id\tname\t\ttotal price\n");
    
        for(i=0;i<n;i++)
        {
            printf("%d\t%s\t\t%f\n",prod[i].id,prod[i].name,prod[i].price*prod[i].quantity);
        }
    }
    else
    {
        printf("you have entered incorrect character.");
    }
    
    return 0;
}









