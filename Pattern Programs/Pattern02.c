//alphabet pyramid
#include<stdio.h>
#include<ctype.h>
void alpha_pyramid(char ch);
int main()
{
	char ch;
	
	printf("ENTER LAST CHARACTER: ");
	scanf("%c",&ch);
	alpha_pyramid(toupper(ch));
	
}

void alpha_pyramid(char a)
{
	for(char i='A';i<=a;i++)
	{
		for(char j='A';j<=i;j++)
		{
		printf("%c",i);
		if(j==i)
		printf("\n");
		}
	}
}
