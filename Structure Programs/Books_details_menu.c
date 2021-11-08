//BooK Seller
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct storing_book{
	char b_name[30];
	char b_title[30];
	char b_publisher[30];
	char Edition[10];
	char b_author[30];
	int  quantity;
}store;
typedef struct searching{
	char namesearch[30];
	char titlesearch[30];
	char Publishersearch[30];	
	char editionsearch[30];
	char authorsearch[30];
}search;

int main(){
	store data[100];
	search detail;
	int i = 1, j=0;
	
	while(i){
		int n;
		printf("Input 1 to store books :\n");
		printf("Input 2 to search books :\n");
		printf("Input 3 to exit :\n");
		printf("\nEnter your choice :");
		scanf("%d",&n);
		
		printf("\n");
		
		switch (n){
			case 1:
			fflush(stdin);
			printf("Enter the Book name :");
			gets(data[j].b_name);
			printf("Enter quantity of Book :");
			scanf("%d",&data[j].quantity);
			
			fflush(stdin);
			
			printf("Enter Book title :");
			gets(data[j].b_title);
			printf("Enter Book Author :");
			gets(data[j].b_author);
			printf("Enter Book Publisher :");
			gets(data[j].b_publisher);
			printf("Enter Book edition :");
			gets(data[j].Edition);
			
			++j;
			
			printf("\n");
			break;
			
			case 2:
			fflush(stdin);
			int sn;
			printf("Input 1 to Search by Book Name :\n");
			printf("Input 2 to Search by Authour :\n");
			printf("Input 3 to Search by Publisher :\n");
			printf("Input 4 to Search by Title :\n");
			printf("Input 5 to Search by Edition :\n");
			printf("\n");
			printf("Enter your appropriate search (1 to 5):");
			scanf("%d",&sn);
			
			printf("\n");
			
			switch (sn){
				case 1: 
				fflush(stdin);
				printf("Enter the book name to be search :\n");
				gets(detail.namesearch);
				
				int a;
				for(a=0;a<n;a++){
					int x = strcmp(detail.namesearch,data[a].b_name);
					
						if(x==0){
							printf("Name of the book :%s\n",data[a].b_name);
							
							printf("Name of the author :%s\n",data[a].b_author);
							
							printf("Name of the publisher :%s\n",data[a].b_publisher);
							
							printf("Title :%s\n",data[a].b_title);
							
							printf("Edition :%s\n",data[a].Edition);
							
							printf("quantity :%d\n",data[a].quantity);
							
							printf("\n");
						}
			
				}
				break;
				
				case 2:
				fflush(stdin);
				printf("Enter the Author name to be search :\n");
				gets(detail.authorsearch);
				
//				int a;
				for(a=0;a<n;a++){
					int x = strcmp(detail.authorsearch,data[a].b_author);
					
						if(x==0){
							printf("Name of the book :%s\n",data[a].b_name);
							
							printf("Name of the author :%s\n",data[a].b_author);
							
							printf("Name of the publisher :%s\n",data[a].b_publisher);
							
							printf("Title :%s\n",data[a].b_title);
							
							printf("Edition :%s\n",data[a].Edition);
							
							printf("quantity :%d\n",data[a].quantity);
							
							printf("\n");
						}
			
				}
				
				break;
				
				case 3:
				fflush(stdin);
				printf("Enter the Publisher name to be search :\n");
				gets(detail.Publishersearch);
				
				for(a=0;a<n;a++){
					int x = strcmp(detail.Publishersearch,data[a].b_publisher);
					
						if(x==0){
							printf("Name of the book :%s\n",data[a].b_name);
							
							printf("Name of the author :%s\n",data[a].b_author);
							
							printf("Name of the publisher :%s\n",data[a].b_publisher);
							
							printf("Title :%s\n",data[a].b_title);
							
							printf("Edition :%s\n",data[a].Edition);
							
							printf("quantity :%d\n",data[a].quantity);
							
							printf("\n");
						}
			
				}
				
				break;
				
				case 4:
				fflush(stdin);
				printf("Enter the Title name to be search :\n");
				gets(detail.titlesearch);
				
				for(a=0;a<n;a++){
					int x = strcmp(detail.titlesearch,data[a].b_title);
					
						if(x==0){
							printf("Name of the book :%s\n",data[a].b_name);
							
							printf("Name of the author :%s\n",data[a].b_author);
							
							printf("Name of the publisher :%s\n",data[a].b_publisher);
							
							printf("Title :%s\n",data[a].b_title);
							
							printf("Edition :%s\n",data[a].Edition);
							
							printf("quantity :%d\n",data[a].quantity);
							
							printf("\n");
						}
			
				}
				
				break;
				
				case 5:
				fflush(stdin);
				printf("Enter the Edition to be search :\n");
				gets(detail.editionsearch);
				
				for(a=0;a<n;a++){
					int x = strcmp(detail.editionsearch,data[a].Edition);
					
						if(x==0){
							printf("Name of the book :%s\n",data[a].b_name);
							
							printf("Name of the author :%s\n",data[a].b_author);
							
							printf("Name of the publisher :%s\n",data[a].b_publisher);
							
							printf("Title :%s\n",data[a].b_title);
							
							printf("Edition :%s\n",data[a].Edition);
							
							printf("quantity :%d\n",data[a].quantity);
							
							printf("\n");
						}
			
				}
				
				break;
				
			}
			
			break;
			
			case 3:
			exit(0);
			
		}
		
	}
}
