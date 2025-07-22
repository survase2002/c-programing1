#include<stdio.h>
int main()
{
    int a,b;
    printf("enter the a no:");
    scanf("""%d",&a);
    printf("enter the b no:");
    scanf("%d",&b);

    if(a==b)
     printf("two no are compare ");
     else if(a<b)
      printf("this condition less than ");
      else if(a>b)
      printf("tihs condition gerta than");
     else 
     printf("not compare ");

    return 0;
}