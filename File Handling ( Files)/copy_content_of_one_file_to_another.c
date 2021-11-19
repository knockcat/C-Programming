//copy content of one file to another
#include<stdio.h>
#include<stdlib.h>
int main(){
	FILE *fptr, *cptr;
	char ch;
	fptr = fopen("Temp.txt","w");

	
	if(fptr == NULL){
		printf("Error opening file:");
		exit(0);
	}
	printf("Enter text to copy:");
	while((ch = getchar() )!= '\n'){
		fputc(ch,fptr);
	}
fclose(fptr);

fptr = fopen("Temp.txt","r");

	
	if(fptr == NULL){
		printf("Error opening file:");
		exit(0);
	}
	cptr = fopen("Tempcopy.txt","w");
	printf("Copying File to Tempcopy.txt");
	if(cptr == NULL){
		printf("Unable to open file:");
		fclose(fptr);
		exit(0);
		
	}
	while((ch = fgetc(fptr)) != EOF){
		if(ch != 32){
			fputc(ch, cptr);
		}
	}
	fclose(fptr);
	fclose(cptr);
	
	return 0;
}


/* #include<stdio.h>
int main()
{
	printf("knockcat\n\n");
	FILE *ptr1,*ptr2;
	char str[100],ch;
	ptr1=fopen("file1.txt","w+");
	ptr2=fopen("file2.txt","w+");
	if(ptr1!=NULL && ptr2!=NULL)
	{
		printf("enter:");
		scanf("%[^\n]s",str);

		fputs(str,ptr1);
		rewind(ptr1);
		while(!feof(ptr1))
		{
			ch=fgetc(ptr1);
			if(ch!=' ')
				fputc(ch,ptr2);
		}
		rewind(ptr2);
		while(!feof(ptr2))
		{
			ch=fgetc(ptr2);
			printf("%c",ch);
		}
	}
	fclose(ptr1);
	fclose(ptr2);
	return 0;
}*/
