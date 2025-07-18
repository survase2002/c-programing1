#include<stdio.h>
int main()
{
    int id, bs;
    float hra=10,da=30,tax=5,hs;
    printf("enter the id ");
    scanf("%d",&id);
    printf("enter the  besic salary ");
    scanf("%d",&bs);
   
    hra=(bs*hra/100);
    da=(bs*da/100);
    tax=(bs*tax/100);

    hs=(bs-hra-da-tax);
    printf("..........emp home salary ........ ");
    printf("\nhouse rent%f",hra);
    printf("\nderness%f",da);
    printf("\n%f",tax);
    printf("\n home salary %f",hs);
    

    return 0;

    
}