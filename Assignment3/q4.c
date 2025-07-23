#include<stdio.h>
int main()
{
    int r,ch;
    int aoc,coc,vos;
    printf("enter the ch::");
    scanf("%d",&ch);
    printf("enter the radius:: ");
    scanf("%d",&r);
    switch (ch)
    {
        case 1: aoc=3.14*(r*r);
                printf("Area of Circle::%d",aoc);
                break;
        case 2:coc=2*3.14*r;
               printf("circumference of circle::%d",coc);
               break;
        case 3:vos=4/3*3.14*(r*r*r);
               printf("Volume of Sphere::%d",vos);
               break;
    default:
        printf("not Options");
        break;
    }

}