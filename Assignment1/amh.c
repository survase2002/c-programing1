#include<stdio.h>
int main()
    {
        int a,b ,am,hm;
        printf("enter 2 number=");
        scanf("%d%d",&a,&b);
        am=(a+b)/2;
        printf(" arithmetic mean=%d\n",am);
        hm=a*b/(a+b);
        printf("harmonic mean=%d\n",hm);

    }
