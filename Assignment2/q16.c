#include<stdio.h>
int main()
{
 int m1,m2,m3;
 char s1[100],s2[100],s3[100];
  int total,avg;
 printf("enter the three subject ");
 scanf("%s %s %s",&s1,&s2,&s3);
 printf("enter the three  marks");
 scanf("%d %d %d",&m1,&m2,&m3);
 
 total =(m1+m2+m3);
  avg=(total/3);
  printf("\ntotla of subject:%d",total);
  printf("\navg of marks:%d",avg);

  if(avg>90)
  printf("\n class-1");
  else if(avg>70)
  printf("\n class-2");
  else if(avg>50)
  printf("\npass class");
  else if(avg>35)
  printf("\n pass");
 
  else
  printf("fail");
}
