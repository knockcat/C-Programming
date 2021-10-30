//Returnning structure Variables from Functions
#include<stdio.h>
typedef struct student_info{
	char name[50];
	int age;
}sinfo;
 sinfo read_data()
{
	sinfo amar;
	printf("Enter name and age:");
	scanf("%s%d",&amar.name,&amar.age);
	return(amar);
}
int main()
{
	sinfo sdata;
	sdata=read_data();
	printf("\n Name and Age\n");
	printf("%s%d",sdata.name,sdata.age);
	return 0;
}
