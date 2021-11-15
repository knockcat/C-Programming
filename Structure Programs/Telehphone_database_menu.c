//Sorted Telephone Directory

#include<stdio.h>
#include<string.h>

struct telephone{
	char name[30];
	unsigned long long int ph_no;
	char city[20];
	
}tele[100];

int main(){

	struct telephone t,*ptr;
	int i=0,n;
	
	printf("How many details you want to enter :");
	scanf("%d",&n);
	
	for(i=0 ; i<n ; i++){
	
		printf("\nEnter Details of %d person :",i+1);
		printf("\n");
		
	
		printf("\nEnter Name : ");
		fflush(stdin);
		scanf("%[^\n]s",tele[i].name);
	
		printf("\nEnter Phone Number  : ");
		scanf("%llu",&tele[i].ph_no);
	
		printf("\nEnter Address : ");
		fflush(stdin);
		scanf("%[^\n]s",tele[i].city);
		
		printf("\n");
	}
	
	printf("Unsorted Names with Telephones and City :");
	printf("\n");
	
	for(i=0 ; i<n ; i++){
		printf("%s \t %llu \t %s\n",tele[i].name,tele[i].ph_no,tele[i].city);
	}

	ptr = tele;
	for(i=0 ; i<n-1 ; i++)
	{
	
			if(strcmp(tele[i].name,tele[i+1].name)>0){
			    t	 	= *ptr;
				*ptr = *(ptr+1);
				*(ptr+1) = t;
			}
			ptr++;
		}
	
	
	
	printf("\n");
	printf("Sorted Names with telephone number and city- :\n");
	printf("\n");

	for(i=0 ; i<n ; i++){
		printf("%s \t %llu \t %s\n",tele[i].name,tele[i].ph_no,tele[i].city);
	}
	
	return 0;
}


/*
Anil sir did the sorting part in this program,, when i was unable to find the appropriate approach, later tarun bhaiya did it 
through pointers..........
*/


/*
#include<stdio.h>
#include<string.h>

struct telephone{
	char name[30];
	char ph_no[13];
	char city[20];

}tele[100];

int main(){
	struct telephone t;
	int i=0,j=0,n;

	printf("How many details you want to enter :");
	scanf("%d",&n);

	for(i=0 ; i<n ; i++){

		printf("\nEnter Details of %d person :",i+1);
		printf("\n");

		fflush(stdin);
		printf("\nEnter Name : ");
		scanf("%[^\n]s",tele[i].name);

		printf("\nEnter Phone Number  : ");
		scanf("%s",&tele[i].ph_no);
		fflush(stdin);
		printf("\nEnter City : ");
		scanf("%s[^\n]s",tele[i].city);

		printf("\n");
	}

	printf("Unsorted Names with Telephones and City :");
	printf("\n");

	for(i=0 ; i<n ; i++){
		printf("%s \t %s \t %s\n",tele[i].name,tele[i].ph_no,tele[i].city);
	}

    getchar();
	for(i=0 ; i<n ; i++)
	{
		for(j = i+1 ; j<n ; j++)
		{
			if(strcmp(tele[i].name,tele[j].name)>0){
			    strcpy(t.name,tele[i].name);
			    strcpy(tele[i].name,tele[j].name);
				strcpy(tele[j].name,t.name);
				//Similarly exhcnage the Contact no and city of the respective members
			}	//this  was done by anil sir , the strcpy idea to copy...
		}
	}
	
	
	//for(i=0 ; i<n-1 ; i++)
	//{
	//	for(j = i+1 ; j<n ; j++);
	//	{
	//		if(strcmp(tele[i].name,tele[j].name)>0){
	//		    t	 	= tele[i];
	//			tele[i] = tele[j];
	//			tele[j] = t;
	//		}
	//	}
	//}
	

	printf("\n");
	printf("Sorted Names with telephone number and city- :\n");
	printf("\n");

	for(i=0 ; i<n ; i++){

		printf("%s \t %s \t %s\n",tele[i].name,tele[i].ph_no,tele[i].city);
	}

	return 0;
}

*/
