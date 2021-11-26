#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
    FILE *fptr, *pptr;
    int num, ind;
    int i;

    fptr = fopen("Numbers.txt", "w+");

    for (i = 0; i < argc - 1; i++)
    {
        fprintf(fptr, "%d ", atoi(argv[i + 1]));
    }
    printf("Sample Output :\n");
    rewind(fptr);
    printf("Vishal  Joshi\n");
    printf("File: Numbers.txt: :");
    for (i = 0; i < argc - 1; i++)
    {
        fscanf(fptr, "%d", &num);
        printf("%d ", num);
    }
    rewind(fptr);

    pptr = fopen("prime.txt", "w+");
    int j;

    for (i = 0; i < argc - 1; i++)
    {
        fscanf(fptr, "%d", &num);

        int count = 0;
        for (j = 2; j <= num / 2; j++)
        {
            if (num % j == 0)
            {
                count++;
                break;
            }
        }

        if (count == 0 && num != 1)
        {
            fprintf(pptr, "%d ", num);
            ind++;
        }
    }

    rewind(pptr);

    printf("\nprime.txt ::\t");

    for (i = 0; i < ind; i++)
    {
        fscanf(pptr, "%d", &num);
        printf("%d ", num);
    }
    fclose(fptr);
    fclose(pptr);
}
