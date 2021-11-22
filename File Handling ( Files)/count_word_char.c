#include <stdio.h>
int main()
{
    FILE *fptr;
    int ch;
    int character = 0, word = 0;
    char filename[20];
    printf("Input File Name to be opened :");
    scanf("%s", filename);

    if ((fptr = fopen(filename, "r")) == NULL)
    {
        printf("Error opening file");
    }

    while ((ch = fgetc(fptr)) != EOF)
    {
        printf("%c", ch);
    }

    rewind(fptr);
    while ((ch = fgetc(fptr)) != EOF)
    {
        if (ch == 32)
        {
            word++;
        }
        if (ch != 32)
        {
            character++;
        }
    }
    printf("\n");
    printf("\nThe Number of words in the file %s are: %d", filename, word + 1);
    printf("\nThe Number of characters in the file %s are: %d", filename, character);
    fclose(fptr);
    return 0;
}