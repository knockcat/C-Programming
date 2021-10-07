//PROGRAM TO CHECK FOR ANGSTRONG NUMBER
#include <stdio.h>
int main() {
    int num, orgnum, rem, revn = 0;
    printf("Enter a three-digit integer: ");
    scanf("%d", &num);
    orgnum = num;

    		while(orgnum != 0) 
	{

        rem = orgnum % 10;
        
       revn= revn+ (rem * rem * rem);
        
       orgnum =orgnum / 10;
    }

    if (revn == num)
        printf("%d is an Armstrong number.", num);
    else
        printf("%d is not an Armstrong number.", num);

    return 0;
}
