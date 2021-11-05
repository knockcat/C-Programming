//program to except a string and print the string after removing all the punctuations character
#include<stdio.h>
#include<ctype.h>
//#include<string.h>
int main(){
	char str[100];
	gets(str);
	
//naive approach without using string function	
/*	
	int i;
	while(str[i] != '\0'){
		if(str[i] >= 65 && str[i] <=122 || str[i]==32){
			printf("%c",str[i]);
		}
		i++;
	}
*/
//using string fuctions
int i;
	while(str[i] != '\0'){
		if(isalpha(str[i]) || str[i]==32){
			printf("%c",str[i]);
			i++;}
		else
		i++;
	}
	
	return 0;
}
