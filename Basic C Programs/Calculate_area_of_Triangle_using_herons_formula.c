//area of traingle using heron's formula (if the required sides given forms a valid traingle)
#include<stdio.h>
#include<math.h>
int main()
{

float a,b,c,s,area;
printf("ENTER SIDE 'a' OF THE TRIANGLE->");
scanf("%f",&a);

printf("ENTER SIDE 'b' OF THE TRIANGLE->");
scanf("%f",&b);

printf("ENTER SIDE 'b' OF THE TRIANGLE->");
scanf("%f",&c);

if(((a+b)>c)||((a+c)>b)||((b+c)>a))
{
    s=(a+b+c)/2;
    area=sqrt((s*(s-a)*(s-b)*(s-c)));
}
else
{
    printf("GIVEN SIDES DO NOT FORM A VALID TRIANGLE->");
}

printf("\nAREA OF TRIANGLE->%0.2f",area);
return 0;
}
