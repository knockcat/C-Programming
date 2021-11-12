//Mobile Store

/*#include<stdio.h>
struct Store{
	char Mob_brand[20];
	int quantity;
}st;
	float price;

void storing(struct st s){
	printf("Enter Mobile Brand->");
	scanf("%s",s.Mob_brand);
	printf("Enter Quantity->");
	scanf("%d",s.quantity);
	printf("Enter Price->");
	scanf("%f",s.price);
	
	display();
	
}

void display(struct st s){
	printf("%s%d%f",s.Mob_brand,s.quantity,s.quantity);
}

int main(){
	st s;
	
		storing(s);
	
}*/


#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct storing
{
    char brandname[50];
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
        printf("Press 1 To Store Brand \n");
        printf("Press 2 To Search Stock \n");
        printf("Press 3 to Exit \n");
        printf("Enter Your Choice ");
        scanf("%d", &n);
        switch (n)
        {
        case 1:
            fflush(stdin);
            printf("Enter The Brnd Name =");
            gets(data[j].brandname);
            printf("Enter The Quantity To Store =");
            scanf("%d", &data[j].quantity);
            printf("Enter The Price Of per piece =");
            scanf("%d", &data[j].price);
            ++j;
            break;
        case 2:
            fflush(stdin);
            printf("Enter The Brand Name to check stock =");
            gets(detail.brandsearch);
            int a;
            for( a=0;a<j;a++)
            { 
            int x= strcmp(detail.brandsearch,data[a].brandname);
            if(x==0)
            {
                printf("Stock in Hand=%d\n", data[a].quantity);
                printf("Total Cost of Inventory =%d\n",(data[a].quantity)*(data[a].price));
            }
            }
            break;
        case 3:
            exit(0);
        }
    }
}

/*
#include <stdio.h>
#include<string.h>
#include<process.h>
struct mobile {
    char brand[30];
    int quantity;
    int price;

}m[10];

void store(struct mobile m[10],int n){
	int i;
    for( i=0;i<n;i++){
        printf("enter details for mobile %d\n",i+1);
        fflush(stdin);
        printf("enter brand name\n");
        gets(m[i].brand); 
        fflush(stdin);
        printf("enter quantity\n");
        scanf("%d",&m[i].quantity); 
        printf("enter price\n");
        scanf("%d",&m[i].price);
    }

}

void search(struct mobile m[10],int limit){
    char str[100], i;
    fflush(stdin);
    puts("enter the brand you want to search\n");
    gets(str);
    for( i=0;i<limit;i++){
    if(strcmpi(m[i].brand,str)==0){
        printf("quantity = %d\n",m[i].quantity);
        printf("price = %d\n",m[i].price);
    }
    }
}
int main()
{
    
    struct mobile *m , m1;
    m = &m1;
    int n;
    char ch;
    do{
    printf("enter you choice\n 1.Storing \n 2.Searching\n 3.exit\n");
    scanf("%d",&n);
    switch(n){
        case 1:
            store(m,1);
            break;
        case 2:
            search(m,1);
            break;
        case 3:
            exit(0);
    }
    fflush(stdin);
    printf("do you want to continue y or n");
    scanf("%c",&ch);
    }while(ch == 'Y'|| ch=='y');
    return 0;
}
*/

/*#include<stdio.h>
#include<string.h>
typedef struct mobile{
	char brand[20];
	int quantity;
	float price;
}mob;
void store(mob info[20],int i)
{
	printf("\nmobile brand:");
	scanf("%s",&info[i].brand);
	printf("quantity:");
	scanf("%d",&info[i].quantity);
	printf("price:");
	scanf("%f",&info[i].price);
	i++;
}
void search(mob info[20],int i)
{
	int j=0,k=0;
	char ch[50];
	printf("\nenter brand name:");
	scanf("%s",ch);
	for(j=0;j<i;j++)
	{
		if(strcmp(info[j].brand,ch)==0){
			printf("stock:%d\nprice:%0.2f\n",info[j].quantity,info[j].price);
			k++;
			break;
		}
	}
	if(k==0)
		printf("no data found\n\n");
}
int main()
{
	
	int n,i=0;
	mob info[20];
	printf("Menu\n1: storing\n2: searching\n3: exit\n");
	do{
		printf("\nenter your choice:");
		scanf("%d",&n);
		if(n==1)
		{
			store(info,i);
			i++;
		}
		else if(n==2)
			search(info,i);
	}while(n>0 && n<3);
	return 0;
}*/


