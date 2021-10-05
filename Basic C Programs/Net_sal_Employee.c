/*computing net salary of an employee as ns=(bp+hra+ta+da)
hra=10% of bp
ta=5% of bp
da=15% of bp
only one input is taken as bp*/

#include<stdio.h>
int main()
{
    float bp,hra,ta,da,ns;
    printf("enter basic pay of employee");
    scanf("%f",&bp);
    hra=(10*bp)/100;
    ta=(5*bp)/100;
    da=(15*bp)/100;
    printf("bp is=>%f,hra is=>%f,ta is=>%f, da is=>%f",bp,hra,ta,da);
    ns=(bp+hra+ta+da);
    printf("net salary of employee is=>%f",ns);
return 0
}
