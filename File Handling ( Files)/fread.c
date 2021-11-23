//fread
#include<stdio.h>
#include<stdlib.h>
struct record{
	char name[25];
	int roll;
	int marks;
}student;

int main(){
	
	FILE *fptr;
	
	if((fptr = fopen("fwite","rb")) == NULL){
		printf("Error in opening file");
	}
	
	printf("\nName\tRoll\tMarks\n");
	
	while(fread(&student,sizeof(student),1,fptr) == 1){
		printf("%s\t",student.name);
		printf("%d\t",student.roll);
		printf("%d\t",student.marks);
	}
	fclose(fptr);
	return 0;
}
