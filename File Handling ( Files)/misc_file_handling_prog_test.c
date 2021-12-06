#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int num;
    int salary[10];
    char name[50];
    int emp_code[10];
    int i;

    FILE *fptr;
    printf("Vishal Joshi\n");
    fptr = fopen("ABC.txt", "w+");
    if (fptr == NULL)
    {
        printf("file not found. please check your file again\n");
        exit(1);
    }
    printf("Enter Number Of Employees\n");
    scanf("%d", &num);
    printf("enter name, emp code and salary\n");
    for (i = 0; i < num; i++)
    {
        printf("Enter Employee Name : ");
        scanf("%s", name);
        printf("Enter Employee Code : ");
        scanf("%d", &emp_code[i]);
        printf("Enter Employee Salary: ");
        scanf("%d", &salary[i]);

        fprintf(fptr, "%s\t%d\t%d\n", name, emp_code[i], salary[i]);
    }

    rewind(fptr);

    int Tot_salary = 0;
    int maxsalary = 0;
    int minsalary = INT_MAX;
    int empcode, empcode1;
    char s[50], s1[50];
    for (i = 0; i < num; i++)
    {
        fflush(stdin);
        
        fscanf(fptr, "%s%d%d", name, &emp_code[i], &salary[i]);

        Tot_salary = Tot_salary + salary[i];

        if (maxsalary < salary[i])
        {
            maxsalary = salary[i];
            empcode = emp_code[i];
            strcpy(s, name);
        }

        
        if (minsalary > salary[i])
        {
            minsalary = salary[i];
            empcode1 = emp_code[i];
            strcpy(s1, name);
        }
       
    }
    
    printf("Average salary of employee is: %d", Tot_salary / num);
    printf("\nEmployee details with largest salary :\nEnplyee Name : %s\t Employee Code : %d\t Employee Salary : %d", s, empcode, maxsalary);
    printf("\nEmployee details with lowest salary :\nEnplyee Name : %s\t Employee Code : %d\t Employee Salary : %d", s1, empcode1, minsalary);
    fclose(fptr);
    return 0;
}

/*
#include<stdio.h>
struct emp{
	char name[30];
	int code;
	int sal;
}info[10],temp;
int main()
{
	printf("Knockcat\n\n");
	FILE *ptr;
	ptr=fopen("abc.txt","r");
	if(ptr!=NULL)
	{
		int i,j;
		for(i=0;i<10;i++)
		{
			fscanf(ptr,"%s%d%d",info[i].name,&info[i].code,&info[i].sal);
		}
		for(i=0;i<10;i++)
		{
			printf("%s\t%d\t%d\n",info[i].name,info[i].code,info[i].sal);
		}
		for(i=0;i<10;i++)
		{
			for(j=0;j<9-i;j++)
			{
				if(info[j].sal>info[j+1].sal){
		   			temp=info[j];
					info[j]=info[j+1];
					info[j+1]=temp;
			   	}
	    	}
		}
		printf("\n\nlowest sal :\n%s\t%d\t%d\n\naverage sal:\n%s\t%d\t%d\n\nhighest sal:\n%s\t%d\t%d",info[0].name,info[0].code,info[0].sal,info[4].name,info[4].code,info[4].sal,info[9].name,info[9].code,info[9].sal);
	}
	fclose(ptr);
	return 0;
}
*/
