//CALCULATE THE GRADE BY READING PERCENTAGE MARKS
#include<stdio.h>
int main()
{
	int a,b,c,d,e,f;
	float per;
	char grade;
	printf("ENTER MARKS IN FIVE SUBJECT:");
	scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
	
	per=((a+b+c+d+e+f)/600)*100;
	
	if(per>80)
	{
		grade='A';
	}
	else if(per>=61&&per<=80)
	{
		grade='B';
	}
	else if(per>=51&&per<=60)
	{
		grade='C';
	}
	else if(per>=41&&per<=50)
	{
		grade='D';
	}
	else if(per>=35&&per<=40)
	{
		grade='E';
	}
	else if(per<35)
	{
		grade='F';
	}
	
	printf("GRADE=>%c",grade);
	return 0;
}
