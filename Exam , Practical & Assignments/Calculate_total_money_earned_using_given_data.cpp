/*VISHAL JOSHI
  SEC E
  Stu_id-2001368 */
#include<stdio.h>
int main()
{
	int a=50000,b=10000;
	int c=5000000;
	int total;
	total=a*80+b*150;
	printf("total money earned=%d\n",total);
	if(total>c)
	printf("profit=%d\n",total-c);
	else
	printf("loss=%d\n",c-total);
	return 0;
}
