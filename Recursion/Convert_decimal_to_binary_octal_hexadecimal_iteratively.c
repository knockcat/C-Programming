//Decimal to binary , Octal , Hexadecimal Iteratively
#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int conversion(int number,int base)
{
    int bin = 0;
    int rem, i = 1, step = 1;
    while (number != 0) {
        rem = number % base;
        number /= base;
        bin += rem * i;
        i *= 10;
    }
    return bin;
}
int main()
{
    int n;
    printf("Enter a number for conversion =");
    scanf("%d", &n);
    printf("Binary Number Equivalent to %d is ::%d \n", n,conversion(n,2));
    printf("Octal Number Equivalent to %d is ::%d \n", n,conversion(n,8));
    printf("Hexadecimal Number Equivalent to %d is ::%d \n", n,conversion(n,16));
}
