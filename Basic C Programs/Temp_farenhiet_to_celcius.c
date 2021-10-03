//converting temperature from farenhiet to celsius
#include<stdio.h>
int main()
{
 float far,cel;
printf("enter temp in farenhiet=>");
scanf("%f",&far);
cel=((far-32)*5)/9;
printf("\ntemp in celsius is=>%f",cel);
return 0;
}
