//function to char n character from user and count no. of vowels entered

#include<stdio.h>
int vowel(char ch);
int main()
{
	int N, vow=0;
	char ch;
	printf("Enter no of character you want to enter->");
	scanf("%d",&N);
for(int i=1;i<=N;i++)
		{
			printf("\nENTER A CHARACTER->");
			fflush(stdin);
			scanf("%c",&ch);
  	  		if(vowel(ch)==1)
  	  		vow++;
		}
			
			
printf("No of vowels->%d",vow);			
	
	return 0;
}



int vowel(char a)
{

		int vowel;
  if (a == 'A' || a == 'E' || a == 'I' || a == 'O' || a == 'U')
  {
    vowel++;
    return 1;
  }
  else if (a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u')
    {
	vowel++;
	return 1;
	}
  
  else
     return 0;

}
