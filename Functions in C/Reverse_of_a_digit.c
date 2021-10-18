//Reverse of a Digit

#include <stdio.h>
#include <stdlib.h>

int revDigit(int x)
{
    static int sum=0,rem;
    if(x==0)
        return 0;
    else
    {
        rem=x%10;
        sum=sum*10+rem;
        revDigit(x/10);
    }
    return sum;
}
int main()
{
    int num;
    printf("Enter a four digit number for reversing =");
    scanf("%d", &num);
    if(num>999 && num<10000)
        printf("Reverse of entered four digit number is =%d", revDigit(num));
    else
        printf("YOU HAVE ENTERED A WRONG INPUT ");
    return 0;
}
