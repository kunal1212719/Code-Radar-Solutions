#include<stdio.h>
int main()
{
    char i,j,n;
    scanf("%c",&n);
    for(i='A',i<=Z;i++)
    {
        for(j='A',j<=i;j++)
        {
            printf("%c ",i);
        }
        printf("\n");
    }
    return 0;
}