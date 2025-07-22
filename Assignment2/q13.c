#include<stdio.h>
int main()
{
    int time,hour,minute, seconds;
    printf("enter the hours");
    scanf("%d",&hour);
    printf("enter the minute");
    scanf("%d",&minute);
    printf("enter the secondes");
    scanf("%d",&seconds);

    if(hour>=0 && hour<=24)
     if (minute>=0 && minute<=60)
      if(seconds>=0 && seconds<=60)
      printf("time is valid");
      else
      printf("time is not valid");
    return 0;
}
