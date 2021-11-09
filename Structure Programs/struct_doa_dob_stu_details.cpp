//Student Details , Seperate Structure For DOB and DOA
#include<stdio.h>
struct dob{
	int day;
	int month;
	int year;
};

struct admission{
	int day;
	int month;
	int year;
};

struct student{
	char name[20];
	int roll_no;
	struct dob d1;
	struct dob d2;
};

int main(){
	int n;
	printf("Enter Number of Students : ");
	scanf("%d",&n);
	struct student a[n];
	int i;
	for ( i = 0; i<n; i++){
		printf("Enter Name : ");
		fflush(stdin);
		scanf("%[^\n]s",&a[i].name);
		fflush(stdin);
		printf("Enter Roll Number of Student :");
		scanf("%d",&a[i].roll_no);
		printf("\n");
		printf("Enter Dob of student : ");
		printf("\nEnter Day :");
		scanf("%d",&a[i].d1.day);
		printf("Enter Month :");
		scanf("%d",&a[i].d1.month);
		printf("Enter Year :");
		scanf("%d",&a[i].d1.year);
		printf("Enter Doa of Student :");
		printf("\nEnter Day :");
		scanf("%d",&a[i].d2.day);
		printf("Enter Month :");
		scanf("%d",&a[i].d2.month);
		printf("Enter Year :");
		scanf("%d",&a[i].d2.year);
	}

	for(i = 0; i < n; i++){
		printf("\n %d Student\n",i+1);
		printf("Name : %s\n",a[i].name);
		printf("Roll Number : %d\n",a[i].roll_no);
		printf("Date of Birth : %d %d %d \n",a[i].d1.day,a[i].d1.month,a[i].d1.year);
		printf("Date  of Admission : %d %d %d \n",a[i].d2.day,a[i].d2.month,a[i].d2.year);
	}

	return 0;
}
