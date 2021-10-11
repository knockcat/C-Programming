//count vowels & consonant from N character input by user

#include<stdio.h>
#include<string.h>

	int main()
	{
		char ch;
		int N,vowel=0,consonant=0;
		printf("NUMBER OF CHARACTER YOU WANT TO ENTER->");
		scanf("%d",&N);
		for(int i=0;i<=N;i++)
		{
			printf("\nENTER A CHARACTER->");
			
			scanf(" %c",&ch);
		if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
		{
			vowel++;
		}
		else 
		consonant++;
	}
	printf("\nNUMBER OF CONSONANT =  %d",consonant);
	printf("\nNUMBER OF VOWLELS =  %d",vowel);
	
return 0;
}
