#include<stdio.h>
int main()
{
    float u,a,t,v,s;
    printf("enter the time & accieleration=");
    scanf("%f%f%f",&u,&a,&t);
    s=u+a*t*t;
    printf("distance travelled=%.2f",s);
    v=u+a*t;
    printf("velocity=%.2f\n",v);
    return 0;

}