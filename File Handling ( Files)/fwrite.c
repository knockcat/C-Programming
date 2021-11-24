//fwrite
#include<stdio.h>
#include<stdlib.h>
struct record{
	int marks;
	int roll;
	char name[35];
}student;

int main(){
	FILE *fptr;
	int n,i;
	if((fptr = fopen("fwite","wb")) == NULL){
		printf("Error in opening file\n");
		exit(1);
	}	
	printf("Enter Number of Records :");
	scanf("%d",&n);
	
	for(i = 0; i < n; i++){
		printf("Enter Name :");
		scanf("%s",student.name);
		
		printf("Enter Roll :");
		scanf("%s",&student.roll);
		
		printf("Enter Marks :");
		scanf("%s",&student.marks);
		
		fwrite(&student,sizeof(student),1,fptr);
	}

fclose(fptr);
return 0;
}
