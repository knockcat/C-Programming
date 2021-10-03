//calculate cast of fencing
#include<stdio.h>
int main()
{
    int length,breadth,perimeter,tot_perimeter, P_rounds;
    float cost,Tot_cost;
    printf("ENTER LENGTH , BREADTH  , NO_OF_ROUNDS:");
    scanf("%d%d%d",&length,&breadth,&P_rounds);
    printf("\nENTER COST OF FENCING:");
    scanf("%f",&cost);
    perimeter=2*(length+breadth);
    tot_perimeter=P_rounds*perimeter;
    printf("\nTOTAL WIRE TO BE PURCHASED FOR FENCING IS=%d\n",tot_perimeter);
    Tot_cost=tot_perimeter*cost;
    printf("\nTOTAL COST OF FENCING=>%f",Tot_cost);
    return 0;

}
