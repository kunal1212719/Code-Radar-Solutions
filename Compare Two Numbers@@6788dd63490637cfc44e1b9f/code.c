#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    if(a==b)
    {
        printf("Equal");
    }
    else if(a>b)
    {
        printf("first");
    }
    else
    {
        printf("second");
    }
    return 0;
}