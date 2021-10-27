/* VISHAL JOSHI
   Sec-E
   Stu_Id-20011368 */
#include <stdio.h>
int main()
{
    float purchase_cost, discount = 0, gst;
    printf("Enter Purchase cost\n");
    scanf("%f", &purchase_cost);
    if (purchase_cost >= 5000)
    {
        discount = purchase_cost * 0.25;
        purchase_cost = purchase_cost - discount;
    }
    else if (purchase_cost >= 2500 && purchase_cost<5000)
    {
        discount = purchase_cost * 0.15;
        purchase_cost = purchase_cost - discount;
    }
    gst = purchase_cost * 0.025;
    purchase_cost = purchase_cost + purchase_cost * 0.025;
    printf("Discount is = %f\n", discount);
    printf("GST is = %f\n", gst);
    printf("Final Billing amount is = %f\n", purchase_cost);

    return 0;
}
