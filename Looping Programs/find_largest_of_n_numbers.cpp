//code to find largest of N numbers enteres by the user

#include<stdio.h>
int main()
{
	int N,lar=0,num;
	printf("HOW MANY DIGIT YOU WANT TO ENTER>>>");
		scanf("%d",&N);
	for(int i=0;i<N;i++)
	{
		printf("\nENTER A NUMBER>>");
		scanf("%d",&num);
		
		if(i==0)
		lar=num;
		
		if(lar<num)
		lar=num;
		
	}
	printf("LARGEST OF ENTERED NUMBER IS>>>%d",lar);
	
	return 0;
}
