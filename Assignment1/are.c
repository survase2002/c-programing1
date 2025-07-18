#include<stdio.h>
int main()
{
    float area,r,circumferece;
    printf("enter the radius");
    scanf("%f",&r);

    area=3.14*r*r;
    circumferece=2*3.14*r;
     printf("area of circle=%f\n",area);
     printf("Circumferece of circle=%f\n",circumferece);

     return 0;
}