#include<stdio.h>
int main()
{
    float h,b,l,wallA;
    
    float dh,dw,doorA;
    
    float ww,wh,windoA;
    float printA ,rw,rh,roofA;


    printf("Enter room height: ");
    scanf("%f",&h);
    printf("Enter room length: ");
    scanf("%f",&l);
    printf("Enter room breadth: ");
    scanf("%f",&b);
    printf("\nenter the doorh:");
    scanf("%f",&dh);
    printf("\nenter the doorw:");
    scanf("%f",&dw);
    printf("\nenter the wh:");
    scanf("%f",&wh);
    printf("\nenter the ww:");
    scanf("%f",&ww);
    printf("\nenter the rh:");
    scanf("%f",&rh);
    printf("\nenter the rw:");
    scanf("%f",&rw);

  wallA=(h*(l+b));
  printf("\n wall area:%f",wallA);

  doorA=1*(dh*dw);
  printf("\ndoor area:%f",doorA);

  windoA=2*(wh+ww);
  printf("\n windo area:%f\n",windoA);

  printA=(wallA+wallA+wallA+wallA);
  printf("\nprinted area:%f\n",printA);

  roofA=(rw*rh);
  printf("roof area:%f\n",roofA);

    return 0;


}

    