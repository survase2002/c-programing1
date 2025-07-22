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

    (a>b && a>c)? printf("a is max %d",a):(b>a && b>c)? printf("a is max %d",b):printf("c is max%d",c);
    (a<b && a<c)? printf("a is min %d",a):(b<a && b<c)? printf("a is min %d",b):printf("c is min%d",c);
    
   
   
    return 0;
}