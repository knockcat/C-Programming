#include<stdio.h>
#define PI=3.142

int main()
 {
     clrscr();
     int r, area;
     printf("ENTER RADIUS OF THE CIRCLE");
     scanf("%d",&r);
     area=PI*r*r;
     printf("AREA=> %d",area);
  return 0;
 }

