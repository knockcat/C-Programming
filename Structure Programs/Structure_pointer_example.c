//pointer to structures
#include<stdio.h>
struct student{
	int roll; char name[50];
};

int main(){
	
//struct student s1={45,"vishal"};       //can be intialised as shown
	struct student s1={22,"vishal"},s2,s3; 
//scanf("%d%s",&s1.roll,s1.name);       //can be ask for the user to enter the input before givig the address to ptr  i.e (*ptr = &s1)
	scanf("%d%s",&s2.roll,s2.name);
struct student *ptr=&s1,*cptr=&s2,*tptr=&s3;
//ptr=&s1;


printf("Student Info:\n");
scanf("%d%s",&s3.roll,s3.name);		//can be ask for the user to enter the input after givig the address to ptr  i.e (*ptr = &s1)

	printf("\nDetails for s1:\n");
		printf("using deference operator:\n");
		printf("%d\n",(*ptr).roll);
		printf("%s\n",(*ptr).name);
		
		printf("\nusing arrow operator:");
		printf("\n%d\n",ptr->roll);
		printf("%s",ptr->name);
		
	printf("\nDetails for s2:\n");
		printf("using deference operator:\n");
		printf("%d\n",(*cptr).roll);
		printf("%s\n",(*cptr).name);
		
		printf("\nusing arrow operator:");
		printf("\n%d\n",cptr->roll);
		printf("%s",cptr->name);
		
	printf("\nDetails for s3:\n");
		printf("using deference operator:\n");
		printf("%d\n",(*tptr).roll);
		printf("%s\n",(*tptr).name);
		 
		printf("\nusing arrow operator:");
		printf("\n%d\n",tptr->roll);
		printf("%s",tptr->name);
		
		return 0;
}
