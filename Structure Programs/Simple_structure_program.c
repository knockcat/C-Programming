//structure
#include<stdio.h>
int main()
{
	
	struct student_data
	{
		char name[20];
		int roll_num;
		char gender;
		float pocket_mon;
	};
	
	struct student_data stu;
	
	printf("\nENTER DATA-\n");
	printf("\nENTER NAME< ROLL< GENDER< POCKET_MONEY\n");
	scanf("%s%d %c%f",&stu.name,&stu.roll_num,&stu.gender,&stu.pocket_mon);
	
	printf("\nINPUTTED DATA-\n");
	printf("\nENTER NAME< ROLL< GENDER< POCKET_MONEY");
	printf("\n%s %d %c %6.2f",stu.name,stu.roll_num,stu.gender,stu.pocket_mon);
	
	return 0;
}




