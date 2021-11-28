#include<stdio.h>
#include<stdlib.h>
int main(){

    FILE *fptr,*cptr,*mptr;
    char file1[20], file2[20];
    char ch;

    printf("Enter name of file 1 to be read :: ");
    scanf("%s",file1);

    printf("Enter name of file 2 to be read :: ");
    scanf("%s",file2);

    fptr = fopen(file1,"r");
    cptr = fopen(file2,"r");

    if(fptr == NULL){
        printf("Error opening file :: ");
    }
    if(cptr == NULL){
        printf("Error opening file :: ");
    }

    mptr = fopen("Merge.txt","w+");

    while ((ch = fgetc(fptr)) != EOF)
    {
        fputc(ch,mptr);
    }
    fputc('\n',mptr);
    
    while ((ch = fgetc(cptr)) != EOF)
    {
        fputc(ch,mptr);
    }
    
    rewind(mptr);
    printf("\nThe two files (%s) & (%s) are merged into (Merge.txt) succesfully...!!",file1,file2);
    printf("\nHere is the content of the merge file Merge.txt:");
    printf("\nThe content of the file Merge.txt is:\n");
    printf("\n");
    while ((ch = fgetc(mptr)) != EOF)
    {
        printf("%c",ch);
    }
    
    fclose(fptr);
    fclose(cptr);
    fclose(mptr);

    return 0;

}