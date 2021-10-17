//decimal to octal
#include <stdio.h>
#include <math.h>

int dec_to_octal(int dec);
int main()
{
int dec;

printf("\nEnter a decimal number:");
scanf("%d", &dec);

printf("\nEquivalent octal number : %d\n", dec_to_octal(dec));

return 0;
}

int dec_to_octal(int dec)
{
int octal = 0, i = 1;

while (dec != 0)
{
octal =octal + (dec % 8) * i;
dec= dec/8;
i=i*10;
}

return octal;
}
