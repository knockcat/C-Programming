//calculating cost of painting a rectangular surface
//cost 100 per m sq. unit
#include<stdio.h>
int main()
{
    int l,b;
    float area,cost;
    printf("enter length=>");
    scanf("%d",&l);
    printf("enter breadth=>");
    scanf("%d",&b);
    area=l*b;
    printf("\narea=>%f",area);
    cost=100*area;
    printf("\ncost of painting the surface=>%f",cost);
    return 0;

}
