//perform division
#include<stdio.h>
int main()
{
    int numerator;
    float denominator,division;
    printf("ENTER denominator=>");
    scanf("%f",&denominator);
    printf("ENTER numerator=>");
    scanf("%d",&numerator);
    division=numerator/denominator;
    printf("QUESTION IS=>%0.2f",division);
    return 0;
}
