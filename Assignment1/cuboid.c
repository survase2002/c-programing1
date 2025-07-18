#include<stdio.h>
int  main()
{
    float  l,b,h,s,volume;
    printf("enter the  length &  breadth & height=");
    scanf("%f%f%f",&l,&b,&h);
    s=2*((l*b)+(l*h)+(b*h));
    volume=l*b*h;

    printf("surface of area=%f\n",s);
    printf("volume=%f\n",volume);

    return 0;

}