#include<stdio.h>
int main()
{
    int i,N;
    scanf("%d",&N);
    for(i=1;i<=10;i++)
    {
        printf("\n%d*%d=%d",i,N,N*i);
    }
    return 0;
}