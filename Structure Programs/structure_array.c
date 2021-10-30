//Array of Structures
//4. Array of Structures  
// Print Student Info
#define MAX 50
#include<stdio.h>
typedef struct StudentRec
{
  char  name[MAX];
  float mark;
} Student;

Student readRecord (int i)
{
  Student ns; // ns = New Student

  printf("Name and marks of student %d:", i + 1);
  scanf("%s%f", ns.name, &(ns.mark));
  return ns;
}

void printRecord (Student item )
{
  printf("Name: %s\n", item.name);
  printf("Marks: %.2f\n\n",item.mark);
}

int main()
{
  int     count = 0;
  Student class[MAX];
  int    i;

  printf("How many students? ");
  scanf("%d", &count);

  for (i = 0; i < count; i++)
      class[i] = readRecord(i);
  

  printf("\nClass list:\n\n");
  for (i=0; i < count; i++)
        printRecord(class[i]);
   
  return 0;
}
