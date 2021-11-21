//delimiting the space by '$' sign
#include<stdio.h>
#include<stdlib.h>
int main(){
	FILE *fptr;
	int ch;
	
	if((fptr = fopen("para.txt","w")) == NULL){
		printf("Error opening file");
			exit(1);
	}
	
	
	printf("Enter Text: \n");
	while ((ch = getchar())!= '\n'){
		if(ch== 32){
			ch = '$'; //dollar symbol
		}
		fputc(ch,fptr);

	}
	
	fclose(fptr);
	
	if((fptr = fopen("para.txt","r")) == NULL){
		printf("Error opening file");
			exit(1);
	}
	printf("\n");	
	while((ch = fgetc(fptr)) != EOF){
		printf("%c",ch);
	}
	fclose(fptr);
		
	
	return 0;
}
