// 7. Access members using Pointer to a Structure
#include <stdio.h>

struct SomeBody
{
   char name[50];
   int age;
   float weight;
};

int main()
{
    struct SomeBody *SomePtr, SomePerson;
    SomePtr = &SomePerson;

    printf("Enter Name: ");
    scanf("%s", SomePtr->name); 
    
    printf("Enter age: ");
    scanf("%d", &SomePtr->age); 

    printf("Enter weight: ");
    scanf("%f", &SomePtr->weight);

    printf("Data Display...\n");
    printf("Name: %s\n", SomePtr->name); 
    printf("Age: %d\n", SomePtr->age);
    printf("weight: %0.2f", SomePtr->weight);
}
