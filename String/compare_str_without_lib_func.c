//program to compare two strings using a function and return 1 if the strings are equal otherwise 0
#include<stdio.h>
#include<string.h>
int str_comp(char str1[], char str2[]){
	
	int i, flag = 1;
	while(str1[i] != '\0' && str2[i] != '\0' ){
		if(strlen(str1) != strlen(str2)){
			flag = 0;
			printf("length are not equal");
			break;
		}
		if(str1[i] != str2[i]){
			flag = 0;
			break;
		}
		i++;
	}
	return flag;
	
}




int main(){
	char str1[50],str2[50];
	
	fgets(str1,50,stdin);
	fgets(str2,50,stdin);
	
	int a = str_comp(str1,str2);
	if(a == 1)
	printf("\nstring are equal");
	else
	printf("\nstring are not equal");	
	
	return 0;
}
