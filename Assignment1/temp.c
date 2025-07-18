#include<stdio.h>
int main()
{
   float f ,c, k;
   printf("enter the temp=");
   scanf("%f",&f);
  c=(5.0/9.0)*(f-32);
  k=c+273.15;
  printf("kelvin=%f\n",k);
  printf("celsius=%f\n",c);

  return 0;

}