/*pattern  *
          **
         ***
        ****
*/
#include<stdio.h>
void pattern(int n)
{
    int space;
    space=n-1;
    for(int i=0;i<=n;i++)
    {
        for(int k=0;k<=space;k++)
        {
            printf(" ");
        }
        space--;

        for(int j=0;j<i;j++)
        {
            printf("*");
        }
        printf("\n");
    }

}
int main()
{
    int n;
    printf("enter no of rows:");
    scanf("%d",&n);
    pattern(n);
    return 0;
}
