#include<stdio.h>
int main()
{
    int s,tax;
    printf("enter the salary");
    scanf("%d",&s);

    if(s<150000)
     tax=0;
     if(s>=150000 && s<=3000000)
     tax=20;
     if(s>=3000000)
     tax=30;

     printf("\n income tax as per (%%)%d",tax);
    return 0;

}
