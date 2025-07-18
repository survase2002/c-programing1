#include<stdio.h>
int main()
{
    int   id,tax ;
    char nm[100];
    float bs,da,hra,total;
     FILE *fp;
     fp=fopen("emp.txt","w");

    printf("enter the id");
    scanf("%d",&id);
    printf("enter the name");
    scanf("%s",&nm);
    printf("enter the basic salary");
    scanf("%f",&bs);
    printf("enter the da(%%)");
    scanf("%f",&da);
    printf("enter the hra(%%)");
    scanf("%f",&hra);

    if(bs>=50000)
    tax=20;
    else if(bs>=40000)
    tax=15;
    else if(bs>=30000)
    tax=10;
    else if(bs>=20000)
    tax=5;
    else
    tax=0;

    total=bs+((bs*(da+hra-tax))/100);
    fprintf(fp,"............EMP..........");
    fprintf(fp,"\ntotal=%f",total);
    fprintf(fp,"\ntax=%d",tax);
    return 0;
}