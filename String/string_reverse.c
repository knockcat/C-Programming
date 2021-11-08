//program to reverse a string

#include<stdio.h>

int main (){
	char a[25],b[25];
	printf("VISHAL JOSHI  SEC - E\n\n\nenter an string->  \n");
	gets(a);
	int i,j,count;
	
while (a[count] != '\0')
  {
    count++;
  }
  j = count - 1;

  
  for (i = 0; i < count; i++)
  {
    b[i] = a[j];
    j--;
  }

  printf("\nString After Reverse: %s", b);
  
  return 0;
}

