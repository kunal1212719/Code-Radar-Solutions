#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    if(a>0)
    {
        printf("Profit");
    }
    else if(a<0)
    {
        printf("Loss");
    }
    else
    {
        printf("No Profit No Loss");
    }
    return 0;
}