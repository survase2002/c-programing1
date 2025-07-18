#include<stdio.h>
int main()
{
    int roll;
    float marks1,marks2,marks3,total,avg;
    char nm[20],sub1[30],sub2[30],sub3[30];
   char grade;
   FILE *fp;
   fp=fopen("Result.txt","w");

    printf("enter the roll no");
    scanf("%d",&roll);
    printf("enter the name");
    scanf("%s",&nm);

    printf("enter the marks");
    scanf("%f",&marks1);
     printf("enter the marks");
    scanf("%f",&marks2);
     printf("enter the marks");
    scanf("%f",&marks3);
    printf("enter the subject");
    scanf("%s",&sub1);
    printf("enter the subject");
    scanf("%s",&sub2);
    printf("enter the subject");
    scanf("%s",&sub3);

    total=marks1+marks2+marks3;
    avg=total/3;


    if(avg<=100 && avg>=90)
     grade='O';
    else if(avg<=90 && avg>=80)
     grade='A';
    else if(avg<=80 && avg>=70)
       grade='B';
    else if(avg<=70 && avg>=60)
        grade='C';
    else if(avg<=60 && avg>=50)
        grade='D';
    else 
      grade='f';

      
    fprintf(fp,"..............Result.............");
    fprintf(fp,"\nroll number =      %d",roll);
    fprintf(fp,"\nname =             %s",nm);
    fprintf(fp,"\nsubject1=        %s",sub1);
    fprintf(fp,"\nmarks1 =          %f",marks1);
    fprintf(fp,"\nsubject2=         %s",sub2);
    fprintf(fp,"\n marks1 =         %f",marks2);
    fprintf(fp,"\nsubject2=         %s",sub3);
    fprintf(fp,"\nmarks1 =          %f",marks3);
    fprintf(fp,"\ntotal=            %f",total);
    fprintf(fp,"\navg=              %f",avg);
    fprintf(fp,"\ngrade=            %c",grade);
    return 0;
    
}