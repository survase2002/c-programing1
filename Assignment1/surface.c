#include<stdio.h>
int main()
{
    float s,r,h,valume;
    printf("enter the radius & heigth");
    scanf("%f%f",&r,&h);
     s=(2*3.14*r*r)+(2*3.14*r*h);

     valume=3.14*r*r*h;
      printf("valume of surface area=%f\n",valume);
     printf("surface area =%f",s);

     return 0;


}