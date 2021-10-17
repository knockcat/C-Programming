////function to char n character from user and count FREQUENCY of 'G' or 'g'

#include<stdio.h>
int frequency(char ch);
int main()
{
	int N, ch_G;
	char ch;
	printf("Enter no of character you want to enter->");
	scanf("%d",&N);
for(int i=1;i<=N;i++)
		{
			printf("\nENTER A CHARACTER->");
			fflush(stdin);
			scanf("%c",&ch);
  	  		if(frequency(ch)==1)
  	  		ch_G++;
		}
			
			
printf("Frequency of char 'G' & 'g' ->%d",ch_G);			
	
	return 0;
}



int frequency(char a)
{

	
  if (a == 'g'|| a=='G')
  {
    
    return 1;
  }
  
  
  else
     return 0;

}
