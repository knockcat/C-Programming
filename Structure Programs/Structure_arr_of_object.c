//structure simple program
#include<stdio.h>
struct student{
	int roll_no;
	char name[30];
}stu1;

int main(){
	
	/*scanf("%s",stu1.name);	
stu1.roll_no = 23 	;
printf("%d",stu1.roll_no);	
printf("%s",stu1.name);*/

	
struct  student  std[5];
int i;

		for(i=0;i<5;i++)
		{
		scanf("%d",&std[i].roll_no);
		scanf("%s",&std[i].name);
		}

	for(i=0;i<5;i++)
		{
			printf("\n%d",std[i].roll_no);
			printf("\t%s",std[i].name);
		}
	

return 0;

}
