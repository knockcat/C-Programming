//program to read structure in main program
#include<stdio.h>
typedef struct employee{
	char Name[50];
	int Empcode;
	int d,m,y;
	double Net_sal;
}info;

void print_employee_details(info emp){
printf("\t\tABC Corporation\t\t\n");
printf("Name\t\t:%s\nEmpcode\t\t:%d\nDOB\t\t:%d\t%d\t%d\nNett.Salary\t\t:%lf",emp.Name,emp.Empcode,emp.d,emp.m,emp.y,emp.Net_sal);

}

int main(){
	info  emp ;
	scanf("%s%d%d%d%d%lf",&emp.Name,&emp.Empcode,&emp.d,&emp.m,&emp.y,&emp.Net_sal);
	print_employee_details(emp);
	return 0;	
}



//program to read structure in main program
/*#include<stdio.h>
typedef struct employee{
	char name[50];
	char ecode[10];
	int d,m,y;
	float sal;
}emp;
void empinfo(emp info)
{
	printf("\nname: %s\nEmpCode: %s\nDOB: %d %d %d\nnet salary: %0.2f\n",info.name,info.ecode,info.d,info.m,info.y,info.sal);
}
int main()
{	
	printf("Name: Vishal Joshi\nSection: E\nStudent id: 20011689\n");
	emp info;
	printf("name of employee:");
	gets(info.name);
	printf("enter employee code:");
	scanf(" %s",info.ecode);
	printf("enter dob as dd mm yyyy:");
	scanf("%d%d%d",&info.d,&info.m,&info.y);
	printf("enter net salary:");
	scanf("%f",&info.sal);
	empinfo(info);
	return 0;
}*/
