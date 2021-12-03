#include<stdio.h>
int main(){
	int num;
	FILE *fptr, *odtr, *evtr;
	
	fptr = fopen("New.txt","w+");
	if(fptr == NULL){
		printf("Error opening file:");
	}
	
	odtr = fopen("od.txt","w");
	evtr = fopen("ev.txt","w");
	
	do{
		printf("Enter number :");
		scanf("%d",&num);
		fprintf(fptr,"%d ",num);
		
		fscanf(fptr,"%d",&num);
		if(num%2 == 0)
			fprintf(evtr,"%d ",num);
		else
			fprintf(odtr,"%d ",num);
		
	}while(num != 0);
	
	fclose(fptr);
	fclose(evtr);
	fclose(odtr);
	return 0;
}

