//Student Record 
#include<stdio.h>
#include<stdlib.h>

int main(){
	FILE *fptr;

	if((fptr = fopen("Students.txt","w")) == NULL){
		printf("Error opening file :");
		exit(1);
	}
	int n,i;
	char name[20],usn[20];
	int sem;
	printf("Enter number of students :");
	scanf("%d",&n);
	
	for(i=0;i<n;i++){
	fflush(stdin);
		printf("Enter Student Name:");
		gets(name);
		fputs(name,fptr);
		fputc('\t',fptr);
		printf("Enter USN:");
		gets(usn);
		fprintf(fptr,"%s",usn);
		fputc('\t',fptr);
		printf("Enter Semester:");
		scanf("%d",&sem);
		fprintf(fptr,"%d",sem);	
		fputc('\n',fptr);
	}
	fclose(fptr);
	return 0;
	}
	
/*	#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int main()
{ FILE *fp;
int i,j=1,s=0,q;
char n[25],rn[10];
//unsigned long long int rn;
fp=fopen("student1.txt","w+");
 printf("enter the number of students ");
 scanf("%d",&q);
 for(i=0;i<q;i++)
 {
 fflush(stdin);
 printf("enter the name of student %d: ",j);
   
//   fgets(n,50,stdin);
scanf("%[^\n]s",n);
   printf("enter the roll num of student: ");
//   scanf("%llu",&rn);
fflush(stdin);
gets(rn);
   printf("enter the sem of student %d: ",j);
    scanf("%d",&s);
     fprintf(fp,"\nname: %s\troll num: %llu\tsemester: %d",n,rn,s);
//     fputs(n,fp);
    ++j;
}
 fclose(fp);
return 0;
}*/

