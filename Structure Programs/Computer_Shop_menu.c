//Computer Shop

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct storing
{
    char item[50];
    int quantity;
    int price;
}store;

typedef struct searching
{
    char brandsearch[50];
}search;

int main()
{
    
    store data[100];
    search detail;
    int i=1,j=0;
    while(i)
    {
        int n;
        printf("Press 1 To Store Item \n");
        printf("Press 2 To Search Stock \n");
        printf("Press 3 to Exit \n");
        printf("Enter Your Choice ");
        scanf("%d", &n);
        printf("\n");
        switch (n)
        {
        case 1:
            fflush(stdin);
            printf("Enter The Item Name =");
            gets(data[j].item);
            printf("Enter The Quantity To Store =");
            scanf("%d", &data[j].quantity);
            printf("Enter The Price Of per piece =");
            scanf("%d", &data[j].price);
            ++j;
            printf("\n");
            break;
        case 2:
            fflush(stdin);
            printf("Enter The Item Name to check stock =");
            gets(detail.brandsearch);
            int a;
            for( a=0;a<j;a++)
            { 
            int x= strcmp(detail.brandsearch,data[a].item);
            if(x==0)
            {printf("\n");
                printf("Stock in Hand=%d\n", data[a].quantity);
                printf("Total Cost of Inventory =%d\n",(data[a].quantity)*(data[a].price));
             printf("\n");   
            }
            }
            break;
        case 3:
            exit(0);
        }
    }
}
