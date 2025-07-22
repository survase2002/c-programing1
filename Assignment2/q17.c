#include<stdio.h>
int main()
{
   int r1,r2,r3,q1,q2,q3,total;
   float discount,dispar,amt;
   char nm1[100],nm2[100],nm3[100];
   
   printf("enter the item name: ");
   scanf("%s",&nm1);
   printf("enter the rate: ");
   scanf("%d",&r1);
   printf("enter the item: ");
   scanf("%d",&q1);

   printf("enter the item name: ");
   scanf("%s",&nm2);
   printf("enter the rate: ");
   scanf("%d",&r2);
   printf("enter the item: ");
   scanf("%d",&q2);

   printf("enter the item name: ");
   scanf("%s",&nm3);
   printf("enter the rate: ");
   scanf("%d",&r3);
   printf("enter the item: ");
   scanf("%d",&q3);

   total=(r1*q1)+(r2*q2)+(r3*q3);

   if(total>=10000)
   dispar=20;
   else if(total>=8000)
   dispar=15;
   else if(total>=4000)
    dispar=8;
   else
   dispar=0;
   printf("\ntotal=%d",total);
   printf("\ndispar=%f",dispar);
   
   discount=(total*dispar/100);
   amt=(total-discount);
   printf("\ndiscount=%f",discount);
   printf("\namt=%f",amt);
      
    return 0;
}





