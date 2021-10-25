 //AVERAGE OF BIGGEST 3 NUMBER OUT OF 4
 #include<stdio.h>
int main()
{
	int m1,m2,m3,m4,avg,min;
	printf("ENTER 4 NUMBERS");
	scanf("%d%d%d%d",&m1,&m2,&m3,&m4);
	
	min=m1;
	if(min>m2)
	min=m2;
	
	if(min>m3)
	min=m3;
	
	if(min>m4)
	min=m4;
	
	avg=(m1+m2+m3+m4-min)/3;
	
	printf("AVERAGE OF GREATEST THREE NUMBERS=%d",avg);
	
	return 0;
}
