// 9. Union Concept Code
#include <stdio.h>
#include <string.h>

union workpad
{
   float wealth   ;
   int roll_num   ;
   char name [8] ;
} temp ;


int main()
{
    printf("size of union = %lu bytes", sizeof(temp)); 
    //temp.wealth = 100.99 ;
       temp.roll_num = 50   ;
    // strcpy(temp.name, "Arjun");
    printf("\nValue of Roll_Num: %d\n", temp.roll_num);
    printf("Value of wealth : %f\n", temp.wealth);
    printf("Value of name : %s\n", temp.name);
    return 0;
}
