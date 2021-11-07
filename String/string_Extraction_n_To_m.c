//program to extract a portion of an sting from nth & mth character  given by user
#include<stdio.h>
#include<string.h>
int main(){
	 char str[50];
	 int n,m,i=0,j=0;
	gets(str);
	
	printf("enter nth index and m (chareacter) to be extracted, respectively ->");
	scanf("%d%d",&n,&m);
	
char ch[50];
		while(str[i] != '\0'){
			if(i>n-1 && i<m+n){
				
			ch[j] = str[i];
			i++;
			j++;}
		 else
			i++;}
 
		ch[j]= '\0';
		
	if(m+n > strlen(str)){
		printf("\n ...value of m is grater than inputed string length after extracting...\n");
	}	
	printf("%s",ch);	
	return 0;
}
