//write three paragraph to a file and then display the number of vowel and consonants in it.
#include<stdio.h>
#include<stdlib.h>
int main(){
	FILE *fptr;
	int ch;
	int vowel = 0, consonant = 0;
	
	if((fptr = fopen("Threeparas.txt","w")) == NULL){
		printf("Error opening file");
			exit(1);
	}
	
	printf("Enter 3 Paragraph: \n");
	int i;
		for(i=0;i<3;i++){
	while ((ch = getchar())!= '\n'){
	
		fputc(ch,fptr);
	}
		fputc('\n',fptr);
}
	fclose(fptr);	
	
	if((fptr = fopen("Threeparas.txt","r")) == NULL){
		printf("Error opening file");
			exit(1);
	}
	printf("\n");	
	while((ch = fgetc(fptr)) != EOF){
		printf("%c",ch);
	
		if((ch=='a')||(ch=='A')||(ch=='e')||(ch=='E')||(ch=='i')||(ch=='I')||(ch=='o') ||(ch=='O')||(ch=='u')||(ch=='U'))
		{
			vowel++;
		}
	else if(ch != ' ')
		{
			consonant++;
		}
	}
	fclose(fptr);
		printf("\n Number of vowels are = %d and consonants are  = %d",vowel,consonant);
	return 0;
}



/*
#include<process.h>
#include <stdio.h>
#include <conio.h>
void main()
{
printf("\nKnockcat ");
FILE *fp1;
int vowel=0,consonant=0;
char ch;
//if(fp1 = fopen("Threeparas.txt","w")  != EOF){
//	fgets
//}

fp1=fopen("Threeparas.txt","r");
if(fp1==NULL)
{
printf("Source can't be opened");
exit(0);
}
ch=fgetc(fp1);
while(ch!=EOF)
{
	if((ch=='a')||(ch=='A')||(ch=='e')||(ch=='E')||(ch=='i')||(ch=='I')||(ch=='o') ||(ch=='O')||(ch=='u')||(ch=='U'))
		{
			vowel++;
		}
	else if(ch != ' ')
		{
			consonant++;
		}
			ch=fgetc(fp1);
}
			printf("\n Number of vowels are = %d and consonants are  = %d",vowel,consonant);

}*/

/*#include<stdio.h>
#include<ctype.h>
int main()
{
	
	FILE *ptr;
	ptr=fopen("Threeparas.txt","a+");
	int i,v=0,c=0;
	char ch;
	char str[100];
	if(ptr!=NULL)
	{
		for(i=0;i<3;i++)
		{
			fflush(stdin);
			scanf("%[^\n]s",str);
			fputs(str,ptr);
			fputc('\n',ptr);
		}
		rewind(ptr);
		while(!feof(ptr))
		{
			ch=fgetc(ptr);
			printf("%c",ch);
			if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
				v++;
			else if(isalpha(ch))
				c++;
		}
	}
	fclose(ptr);
	printf("\nvovel=%d\nconsonents=%d",v,c);
	return 0;
}*/

