//encode decode string

#include<stdio.h>
#include<string.h>
int main(){
	char str1[50];
//	gets(str1);
fgets(str1,49,stdin);
int i=0;
while(str1[i] != '\0'){
		printf("\n%c",str1[i]);
		
		i++;
	}

	 i=0;
	while(str1[i] != '\n'){
		str1[i] = str1[i] + 8;
		i++;
	}
	i=0;
	
	
//	str1[i]='\0';
	i=0;
	printf("encoded string is -> %s",str1);
	while(str1[i] != '\n'){
		str1[i] = str1[i] - 8;
		i++;
	}
//	str1[i]='\0';
		printf("\ndecoded string is -> %s",str1);
	return 0;
}


/*int main(){
	char str1[50];
	gets(str1);
	
	int i=0;
	while(str1[i] != '\0'){
	if(str1[i]>='a' && str1[i] <= 'z')
	str1[i] = str1[i]+3;

	
	else
	str1[i] = str1[i] + 8;
	i++;
}
	
	
	str1[i]='\0';
	
	printf("encoded string is -> %s",str1);
	return 0;
}*/

/*#include<stdio.h>
#include<conio.h>
 
char* encode(char* str) {
   int i = 0;
 
   while (str[i] != '\0') {
      str[i] = str[i] - 30;  // Subtract 30 From Charcter
      i++;
   }
   return (str);
}
 
void main() {
 
   char *str;
 
   printf("\nEnter the String to be Encode : ");
   gets(str);
 
   str = encode(str);
   printf("\nEncoded String : %s", str);
 
   getch();
}*/


/*
#include<stdio.h>
int main(){
    char str1[50];
    int i=0;
    fgets(str1,50,stdin);
    while (str1[i]!='\0')
    {
        str1[i]=str1[i]+5;
        i++;
    }
    //str1[i]='\0';
    printf("encode string->%s", str1);
    return 0;
}*/
