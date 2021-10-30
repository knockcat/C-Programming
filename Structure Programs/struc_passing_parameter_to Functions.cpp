//structure passing parameter to functions
#include<stdio.h>
struct student_info{
	char name[50];
	int age;
};

void printdata(struct student_info student)
{
	printf("Menber Details\n");
	printf("%s %d \n",student.name,student.age);
}
int main()
{
	struct student_info sdata={"arjun",12};
	printdata(sdata);
}

