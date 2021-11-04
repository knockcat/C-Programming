#include<stdio.h>
#include<string.h>
char * del_str(char str[], int n ,int m){

    int i=0,j=0;
    for(i=0;i<n;i++)
    {
            
    }
    for(j=m+n;j<strlen(str);j++,i++)
        {
            str[i]=str[j];
        }
        str[i]='\0';

return str;

    
}


int main(){
    int m,n;
    char str[50];
    gets(str);
    printf("enter nth index and m (character) to be deleted, respectively ->");
    scanf("%d%d",&n,&m);
    
    if(m+n > strlen(str))
    {
        printf("\n ...value of m is grater than inputed string length ...\n");
    }
    else
    {
     printf("string after deleting mth to nth indexes of characters is ---%s",del_str(str,n-1,m)); //n-1
    }
    
    return 0;
}













/*#include<stdio.h>
#include<string.h>
char * del_str(char str[], int n ,int m){

	int i=0,j=0;
	char ch[50];
	while(str[i] != '\0'){
		if(i>=n && i<m+n){
			i++;
		}
		else{
			ch[j]=str[i];
			i++;
			j++;
		}
		
	}
		
	ch[j]='\0';
	
	if(m+n > strlen(str)){
		printf("\n ...value of m is grater than inputed string length ...\n");
	}	
	
	
		printf("string after deleting mth to nth indexes of characters is ---%s",ch);
		
return ch;		

	
}


int main(){
	int m,n;
	char str[50];
	gets(str);
	printf("enter nth index and m (character) to be deleted, respectively ->");	
	scanf("%d%d",&n,&m);
	
	
	 printf("%s",del_str(str,n,m));
	
	return 0;
}*/



