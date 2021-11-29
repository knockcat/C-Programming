//print numbers which are multiple of 7 from a file "Numbers.txt"
#include<stdio.h>
#include<stdlib.h>
int main(){
	FILE *fptr;
	
	int num;	
	
	
	if((fptr = fopen("Numbers.txt","r")) == NULL){
		printf("Error opening file");
			exit(1);
	}
	printf("Multiple of 7\n");
	while((fscanf(fptr,"%d",&num)) != EOF){
		if((num%7) == 0){
			printf("%d ",num);
		}
	
}
	fclose(fptr);
	
	return 0;
}
