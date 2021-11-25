#include<stdio.h>
#include<stdlib.h>
int main(int argc, char *argv[])
{
   
    FILE *fp,*fpo,*fpe;
    fp=fopen("Num.txt","w+");
    int i;
    for( i=0;i<argc-1;i++)
    {
        fprintf(fp,"%d ",atoi(argv[i+1]));
    }
    printf("Printing the context of file =");
    rewind(fp);
    int temp;
    for( i=0;i<argc-1;i++)
    {
        fscanf(fp,"%d",&temp);
        printf("%d ",temp);
    }
    rewind(fp);
    fpo=fopen("Odd.txt","w+");
    fpe=fopen("Even.txt","w+");
    int b,c=0;
    for( i=0;i<argc-1;i++)
    {
        fscanf(fp,"%d",&b);
        if(b%2==0)
        {
            fprintf(fpe,"%d ",b);
            c++;
        }
        else{
            fprintf(fpo,"%d ",b);
        }
    }
    rewind(fpe);
    rewind(fpo);
    printf("\nPrinting the details of file Odd.txt =");
    for( i=0;i<(argc-1-c);i++)
    {
        fscanf(fpo,"%d",&temp);
        printf("%d ",temp);
    }
    printf("\nPrinting the details of file even.txt =");
    temp=0;
    for( i=0;i<c;i++)
    {
        fscanf(fpe,"%d",&temp);
        printf("%d ",temp);
    }
    fclose(fp);
    fclose(fpo);
    fclose(fpe);
}




