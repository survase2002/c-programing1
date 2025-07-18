#include<stdio.h>

int main()
{
    int x1,y1,x2,y2,distance;
    printf("enret the values=");
    scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
    distance =((x2 - x1) + (y2 - y1));
    printf("distance =%d",distance);
   
     return 0;
}