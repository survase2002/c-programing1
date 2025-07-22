#include<stdio.h>
int main()
{
    int num;
    printf("enter the number:");
    scanf("%d",&num);
    if(num>=0)
      if(num%5==0 && num%7==0)
       printf("no is divisible by 5 &7:");
      else
       printf("\nno is not divisible by 5 & 7");
    else
     printf("/no is negative");
    return 0;

}
