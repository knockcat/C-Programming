//struct vs union
#include<stdio.h>
struct student{
	char name[20];
	int roll;
	char sec;
};

union student1{
	char name[20];
	int roll;
	char sec;
};

int main(){
 struct student   st; 	//structure variable
 union student1	 st1;  //union variable
	
	printf("struct student\n");
		printf("Enter Name :");	scanf("%[^\n]s",st.name); 
		printf("Enter Roll Number :");	scanf("%d",&st.roll);
		fflush(stdin);
		printf("Enter Section :");	scanf("%c",&st.sec);

	
	printf("Size of struct student :%d",sizeof(st));//structure
	
	printf("\n");
	printf("\nunion student1\n");
	fflush(stdin);
		printf("Enter Name :");	scanf("%[^\n]s",&st1.name); 
		printf("Enter Roll Number :");	scanf("%d",&st1.roll);
		fflush stdin;
		printf("Enter Section :");	scanf("%c",&st1.sec);
		
	printf("Size of struct student :%d",sizeof(st1));//union
	
	return 0;
	
}
