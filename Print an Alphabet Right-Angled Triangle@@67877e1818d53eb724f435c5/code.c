#include<stdio.h>
int main()
{
    char i,j,n;
    scanf("%c",&n);
    for(i='A',i<=n;i++)
    {
        for(j='n',j>=i;j--)
        {
            printf("%c ",j);
        }
        printf("\n");
    }
    return 0;
}