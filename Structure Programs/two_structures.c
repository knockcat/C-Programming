//program to define, Assign, read and display two different structures:
#include<stdio.h>
struct Student_info{
	char Name[50];
	int stu_id;
	char sec;
	long long int phone_no;
};
struct Bank_acc_info{
	char Bank_acc_holder_name[50];
	long long int Bank_acc_no;
	char Ifsc_code[20];
	char Acc_type[50];	
};

int main(){
	struct Student_info student;
	struct Bank_acc_info details;
		printf("\nEnter student name,id,sec,phone-no:\n");
	scanf("%s%d %c%lld",&student.Name,&student.stu_id,&student.sec,&student.phone_no);

		printf("\nEnter bank account holder name,acc no,ifsc code,Acc type:\n");
	scanf("%s%lld%s%s",&details.Bank_acc_holder_name,&details.Bank_acc_no,&details.Ifsc_code,&details.Acc_type);
	
		printf("\nStudent Information:\n");
	printf("\n%s\t%d\t%c\t%lld\n",student.Name,student.stu_id,student.sec,student.phone_no);
	
		printf("\nBank Account information:\n");
	printf("\n%s\t%lld\t%s\t%s",details.Bank_acc_holder_name,details.Bank_acc_no,details.Ifsc_code,details.Acc_type);
	
	return 0;
}

//program to define, Assign, read and display two different structures:
/*#include<stdio.h>
#include<stdlib.h>
typedef struct student{
	char name[50];
	int stid;
	char sec;
	unsigned long long int no;
}std;
typedef struct bankinfo{
	char aname[50];
	unsigned long long int ano;
	unsigned long long int ifsc;
	char acc[50];
}bank;
int main()
{
	printf("Name: Vishal Joshi\nSection: E\nStudent id: 20011689\n");
	std info;
	printf("name of student:");
	gets(info.name);
	printf("enter student id:");
	scanf("%d",&info.stid);
	printf("enter section:");
	scanf(" %c",&info.sec);
	printf("enter contact no:");
	scanf("%llu",&info.no);
	printf("\nname: %s\nstudent id: %d\nsection: %c\ncontact no: %llu\n",info.name,info.stid,info.sec,info.no);
	fflush(stdin);
	bank info2;
	printf("\nname of acc holder:");
	gets(info2.aname);
	printf("enter acc no:");
	scanf("%llu",&info2.ano);
	printf("enter ifsc code:");
	scanf("%llu",&info2.ifsc);
	printf("enter acc type:");
	scanf("%s",&info2.acc);
	printf("\nname: %s\nacc no: %llu\nifsc: %llu\nacc type: %s\n\n",info2.aname,info2.ano,info2.ifsc,info2.acc);
	return 0;
}*/
