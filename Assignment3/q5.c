#include<stdio.h>
int main()
{
    int d ;
    printf("enter the day:");
    scanf("%d",&d);
  
    switch (d)
    {
      case 1:printf("monday");break;
      case 2:printf("Tuesday");break;
      case 3:printf("Wednesday");break;
      case 4:printf("Thursday");break;
      case 5:printf("Friday");break;
      case 6:printf("Saturday");break;
      case 7:printf("Sunday");break;
      
             
    default:printf("day is not found");

        break;
    }
return 0;
}

