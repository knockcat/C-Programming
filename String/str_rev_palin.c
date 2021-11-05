//rev palindrome
#include <stdio.h>

int PalinRevStr(char *str1)
{
    char str2[100];
    int count = 0;
    while (str1[count] != '\0')
        count++;
        int i;
    for ( i = 0; i <count ; i++)
    {
        str2[i] = str1[count-1 - i];
    }
    for ( i = 0; i <count/2 ; i++)
    {
        if (str1[i]!=str2[i])
        {
            return 0;
        }
        else{
            continue;
        }
        
    }
    return 1;
}

int main()
{
    char str1[100];
    scanf("%s", str1);
   int x= PalinRevStr(str1);
      if(x==1)
        printf("String is pallindrome\n");
    else
        printf("String is not a pallindrome\n");
   return 0;
}


// another apporach


//program to check whether an input string is palindrome or not

/*#include<stdio.h>
#include<string.h>
int main(){
	char a[50];
	int i,n,c=0;
 
   printf("Enter string : ");
    gets(a);
    n = strlen(a);
 
    for(i=0;i<n/2;i++)  
    {
    	if(a[i]==a[n-i-1])
    	c++;
 
 	}
 	if(c==i)
 	    printf("string is palindrome");
    else
        printf("string is not palindrome");
 
 	 
     
    return 0;
}*/
