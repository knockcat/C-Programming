#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fptr;

    char ch;
    int count;

    if ((fptr = fopen("Countline.txt", "r")) == NULL)
    {
        printf("Error reading file");
        exit(1);
    }

    while ((ch = fgetc(fptr)) != EOF)
    {
        printf("%c",ch);
        if (ch == '\n')
            count++;
    }

    printf("\nNumber of lines in above file is : %d", count + 1);
    return 0;
}