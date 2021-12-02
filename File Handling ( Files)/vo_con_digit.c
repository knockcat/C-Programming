#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *fptr, *vptr, *cptr, *nptr, *sptr;
    char ch;
    if ((fptr = fopen("character.txt", "w+")) == NULL)
    {
        printf("Error Opening File !");
        exit(1);
    }

    while ((ch = getchar()) != '\n')
    {
        fputc(ch, fptr);
    }

    rewind(fptr);

    vptr = fopen("vowel.txt", "w");
    cptr = fopen("consonant.txt", "w");
    nptr = fopen("numbers.txt", "w");
    sptr = fopen("special_charracter.txt", "w");

    while ((ch = fgetc(fptr)) != EOF)
    {

        if (ch == 'a' || ch == 'A' || ch == 'e' || ch == 'E' || ch == 'o' || ch == 'O' || ch == 'i' || ch == 'I' || ch == 'u' || ch == 'U')
        {
            fputc(ch, vptr);
        }

        else if (ch >= '0' && ch <= '9')
        {
            fputc(ch, nptr);
        }

        else if ((ch >= 65 && ch <= 91) || (ch>=97 && ch<=122) && ((ch != 'a' || ch != 'A' || ch != 'e' || ch != 'E' || ch != 'o' || ch != 'O' || ch != 'i' || ch != 'I' || ch != 'u' || ch != 'U')))
        {
            fputc(ch, cptr);
        }

        else
        {
            fputc(ch, sptr);
        }
    }
    fclose(fptr);
    fclose(vptr);
    fclose(cptr);
    fclose(nptr);
    fclose(sptr);
    return 0;
}
