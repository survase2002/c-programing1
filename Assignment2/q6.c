#include<stdio.h>
int main()
{
    int num;
    printf("enter the number:");
    scanf("%d",&num);

  
      if(num%5==0 || num%7==0)
      printf("\n is divisible by both 5 and 7:");
      else if(num%5!=0 || num%7!=0)
      printf("\n is divisible by not 5 and 7");
     
    return 0;
} 