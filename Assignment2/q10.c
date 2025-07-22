#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter the a no:");
    scanf("%d",&a);
    printf("enter the b no:");
    scanf("%d",&b);
    printf("enter the c no:");
    scanf("%d",&c);

     if(a>b && a>c)
      printf("%d",a);
      else if(b>a && b>c)
       printf("%d",b);
       else
       printf("%d",c);
    
    if(a+b>c && a+c>b && b+c>a)
    printf("this triangle is valid");
    else
    printf("this not  triangle is valid");
      
    return 0;
}