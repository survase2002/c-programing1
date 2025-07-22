#include<stdio.h>
int main()
{
    int y;
    printf("enter the year:");
    scanf("%d",&y);

    if(y%4==0 && y%100!=0 && y%400==0)
     printf(" this year is leap");
     else
     printf(" this year not leap.");
     return 0;
    
}