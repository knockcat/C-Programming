//PERFORM RIGHT SHIFT AND LEFT SHIFT
#include<stdio.h>
int main()
 {
 	int num,shift,e,f;

 	printf("ENTER ANY POSITIVE NUMBER->");
 	scanf("%d",&num);

 	printf("ENTER HOW MANY BITS YOU WANT THE NUMBER SHIFTED->");
 	scanf("%d",&shift);

 	printf("LET PERFORM LEFT SHIFT FIRST\n->");
 	e=num<<shift;
 	printf("ANSWER WILL BE: %d",e);

 	printf("\nLET PERFORM RIGHT SHIFT NOW\n:");
 	f=num>>shift;
 	printf("ANSWER WILL BE:%d\n",f);
 	return 0;
 }
