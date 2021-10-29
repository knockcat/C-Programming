//Increment/Decrement  Addition/Subtraction
#include<stdio.h>
int main(void)
{
printf("VISHAL JOSHI  Sec-E");	
int a[]={1,2,3,4},i,c1,c2,cho,jmp;
char ch[]={'J','O','S','H','I','$'};
int *ptr;
char *cptr;
ptr=&a[1];
cptr=&ch[1];
printf("\nValue=%d\nAddress=%lu\n\nValue(c)=%c\nAddress(c)=%lu\n\n",*ptr,(unsigned long)ptr,*cptr,(unsigned long)cptr);
printf("1.)Increment/Decrement of a Pointer\n2.)Addition/Subtraction of integer to a pointer\n");
scanf("%d",&cho);
switch(cho)
{
case 1:
printf("1.Increment\n2.Decrement\n");
scanf("%d",&c1);

if(c1==1)
{
	printf("New address is %lu and the value at new address is %d\n",(unsigned long)(ptr+c1),*(c1+ptr));
	
	printf("New address is %lu and the value at new address is %c",(unsigned long)(cptr+1),*(1+cptr));
}

else if(c1==2)
{
	printf("New address is %lu and the value at new address is %d\n",(unsigned long)(ptr-1),*(ptr-1));
    
    printf("New address is %lu and the value at new address is %c",(unsigned long)(cptr-1),*(cptr-1));
    
}
break;

case 2:
jmp--;

printf("1.Addition\n2.Subtraction\n");
scanf("%d",&c2);

printf("Enter how many places to be jumped\n");
scanf("%d",&jmp);

if(c2==1)
{
	printf("New address is %lu and the value at new address is %d\n",(unsigned long)(ptr+jmp),*(jmp+ptr));

    printf("New address is %lu and the value at new address is %c",(unsigned long)(cptr+jmp),*(jmp+cptr));

}

else if(c2=2)
{
    
	printf("New address is %lu and the value at new address is %d\n",(unsigned long)(ptr-jmp),*(ptr-jmp));

    printf("New address is %lu and the value at new address is %c",(unsigned long)(cptr-jmp),*(cptr-jmp));

    
}
break;


default:
printf("\nInvalid choice");

}
return 0;

}
