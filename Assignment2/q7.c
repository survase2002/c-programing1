#include<stdio.h>
int main()
{
    int a,b,c;
     printf("enter the three num:");
     scanf("%d%d%d",&a,&b,&c);

     if(a>b && a<c || a<b && a>c)
     printf("%d in between %d and %d ",a,b,c);
     else if (b>a && b<c ||b<a && b>c)
     printf("%d in between %d and %d",b,a,c);
     else
     printf("%d in between %d and %d",c,a,b);

     return 0;
     
} 