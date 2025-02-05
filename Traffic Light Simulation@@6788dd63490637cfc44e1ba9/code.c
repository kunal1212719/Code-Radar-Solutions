#include<stdio.h>
int main()
{
    char i;
    scanf("%c",&i);
    if(i=='R')
    {
        printf("Stop");
    }
    else if(i=='G')
    {
        printf("Go");
    }
    else if(i=='Y')
    {
        printf("Slow Down");
    }
    else
    {
        printf("Invalid Input");
    }
    return 0;
}