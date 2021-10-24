//frequency of g or G
#include<stdio.h>
int gCount(int N)
{
    char ch;
    int count=0, i;
    for( i=1;i<=N;i++)
    {
        scanf(" %c",&ch);
        if(ch=='G'||ch=='g')
            count++;
    }
    return count;
}
int main()
{
    int N;
    printf("enter total no character:");
    scanf("%d",&N);
    printf("total no of G:%d",gCount(N));
    return 0;
}
