#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int tooctal(int x)
{
    static int o=0,i=0;
    if(x==0)
    {
        return 0;
    }
    else
    {
        o=o+((x%8)*pow(10,i));
        ++i;
        tooctal(x/8);
    }
    return o;
}
int main()
{
    int n;
    printf("Enter a number in decimal number system =");
    scanf("%d", &n);
    printf("the number after octal conversion is =%d", tooctal(n));
    return 0;
}
