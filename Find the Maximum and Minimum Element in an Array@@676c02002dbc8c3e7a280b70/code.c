#include<stdio.h>
int main()
{
    int N;
    int arr[N];
    scanf("%d",&N);
    for(int i=0;i<N;i++)
    {
        scanf("%d",&arr[i]);
    }
    int b=arr[0];
    int a=arr[0];
    for(int j=0;j<N;j++)
    {
        if(a>arr[j])
        {
            a=arr[j];
        }
    }
    printf("%d",a);
    for(int k=0;k<N;k++)
    {
        if(b<arr[k])
        {
            b=arr[k];
        }
    }
    printf("%d",b);
}