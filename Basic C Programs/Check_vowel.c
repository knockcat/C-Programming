//TO CHECK WHETHER ENTERED CHARACTER IS A VOWEL OR NOT
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
int main()
{
	char ch;
	printf("ENTER A CHARACTER:");
	scanf("%c",&ch);
	if(isalpha(ch))
	{
		ch=tolower(ch);
		if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
		{
			printf("ENTERED CHARACTER IS VOWEL");
		}
		else
		{
			printf("ENTERED CHARACTER IS CONSONANT");
		}

	}
		else
		{
		printf("ENTERED CHARACTER IS NOT A ALPHABET");
		}
		return 0;

	}


