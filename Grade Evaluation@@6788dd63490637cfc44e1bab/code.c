#include<stdio.h>
int main()
{
    char i;
    scanf("%c",&i);
    if(i='A')
    {
        printf("Excellent");
    }
    else if(i='B')
    {
        printf("Good");
    }
    else if(i='C')
    {
        printf("Average");
    }
    else if(i='D')
    {
        printf("Below Average");
    }
    else if(i='f')
    {
        printf("Fail");
    }
    else
    {
        printf("Invalid grade");
    }
    return 0;
}