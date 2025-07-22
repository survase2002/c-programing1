#include<stdio.h>
int main()
{
    int cost,sells,result;
    printf("enter the cost price");
    scanf("%d",&cost);
    printf("enter the selling price");
    scanf("%d",&sells);

    if(cost>sells)
     {
        result=(sells-cost);
        printf("\nthis loss price:%d",result);
     }
     else
     {
        result=(sells-cost);
        printf("this is profit price:%d",result);
     }
     
    return 0;

}