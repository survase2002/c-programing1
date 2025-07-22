#include<stdio.h>
int main()
{
    int a;
    printf("enter the no:");
    scanf("%d",&a);
    if(a>=0)
    {
        printf("no is positive");
    }
    else
    {
        printf("no is negative");
    }
    return 0;
}