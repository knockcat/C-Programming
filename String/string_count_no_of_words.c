//program to count number of words in a string
#include<stdio.h>

int main(){
	char a[50];
	
	printf("VISHAL JOSHI  SEC - E\n\n\nEnter a string-\n\n");
	gets(a);
	int i=0,count=1;
	while(a[i] != '\0'){
		if((a[i] == 32) || (a[i] == 9) || (a[i] == 10)) {
			count++;	
		}
		i++;
	}
	printf("Number of words - %d",count);
}
