//SWAPPING TWO NUMBERS
#include<stdio.h>
int main()
{
   int a,b;
    printf("enter values of a & b=>\n");
    scanf("%d%d",&a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("values of a after swaping=%d\n and b is=%d",a,b);

    return 0;
}
