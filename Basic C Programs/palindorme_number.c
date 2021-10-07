//PROGRAM TO CHECK FOR PALINDROME NUMBER
#include <stdio.h>
int main() {
    int n, revn = 0, rem, orgn;
    printf("Enter an integer: ");
    scanf("%d", &n);
    orgn = n;

    
    while (n != 0) {
        rem = n % 10;
        revn = revn * 10 + rem;
        n /= 10;
    }

  
    if (orgn == revn)
        printf("%d is a palindrome.", orgn);
    else
        printf("%d is not a palindrome.", orgn);

    return 0;
}

