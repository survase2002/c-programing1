#include<stdio.h>
int main()
{
    int dt,fine;
    printf("enter the dt");
    scanf("%d",&dt);
    if(dt<5)
    fine=6;
    else if(dt<10)
     fine=10;
    else if(dt>10)
     fine=15;

     printf("fine=%d",fine);
     
}








// 18. A library charges a fine for every book returned late. Accept the number of 
// days the member is late, compute and print the fine as follows:(less than five 
// days Rs fine, for 6 to 10 days Rs. Fine and above 10 days Rs. fine 