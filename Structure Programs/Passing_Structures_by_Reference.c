// Passing Structures by Reference
#define MAX 50
#include <stdio.h>

struct StudentRec
{
char name[MAX];
float mark;
};

typedef struct StudentRec Student;

void readRecord (Student *OneStudent)
// Pass by Address
{
printf("Enter Name and marks: ");
scanf("%s%f", (*OneStudent).name,
&(*OneStudent).mark);
} // Arun 88.55

// Pass by Value
void printRecord (Student OneStudent)
{
printf("Name: %s\n", OneStudent.name);
printf("Marks:%f\n", OneStudent.mark);
} // Arun 88.55


int main()
{
Student SomeStudent;

readRecord(&SomeStudent);
// By reference
printf("\nStudent Details:\n");
printRecord(SomeStudent);
// By Value
}

