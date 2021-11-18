#include <stdio.h>
#include <stdlib.h>
int main()
{
    char ch;
    FILE *fptr, *cptr;

    if ((fptr = fopen("alpha.txt", "w+")) == NULL)
    {
        printf("Error Opening File:");
        exit(1);
    }

    while ((ch = getchar()) != '\n')
    {
        fputc(ch, fptr);
    }

    rewind(fptr);

    cptr = fopen("alphaupper.txt", "w");

    while ((ch = fgetc(fptr)) != EOF)
    {
        if (ch >= 'a' && ch <= 'z')
        {
            ch = ch - 32;
        }
        fputc(ch, cptr);
    }

    fclose(fptr);
    fclose(cptr);

    return 0;
}