//6. Program - Pointer to a Structure
#define MAX 50
#include <stdio.h>

struct StudentRec
{
  char  name[MAX];
  float mark;
};

typedef struct StudentRec Student;

void readRecord (Student *OneStudent )
{
  printf("Enter Name and marks: ");
  scanf("%s%f", (*OneStudent).name, &(*OneStudent).mark);
} // Anita 99.56

void printRecord (Student OneStudent )
{
  printf("Name: %s\n", OneStudent.name);  
  printf("Marks: %.2f\n\n", OneStudent.mark);
} // Anita 99.56

int main()
{
  Student *sPtr, SomeStudent;

  sPtr = &SomeStudent ;

  readRecord(sPtr);//Pointer is passed
  printf("\nStudent Info:\n");
  printf("Name: %s\n", sPtr->name);  
  printf("Marks: %.2f\n\n", sPtr->mark);
}
