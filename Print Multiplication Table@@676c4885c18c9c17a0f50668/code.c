#include<stdio.h>
int main()
{
    int i,N,x;
    scanf("%d",&N);
    for(i=1;i<=10;i++)
    {
        printf("%d x %d = %d",N,i,N*i);
        printf("\n");
    }
    return 0;
}