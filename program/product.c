#include<stdio.h>
int main()
{
    int id,ps1,ps2,ps3,qty1,qty2,qty3;
    float totla,disper,disamt,payamt;
    char nm1[50],nm2[50],nm3[50];
    printf("\nenter the id");
    scanf("%d",&id);
    printf("\nenter the name:");
    scanf("%s",&nm1);
     printf("\nenter the name:");
    scanf("%s",&nm2);
     printf("\nenter the name:");
    scanf("%s",&nm3);
    printf("\nenter the 3 product price:");
    scanf("%d",&ps1);
    printf("\nenter the 3 product price:");
    scanf("%d",&ps2);
    printf("\nenter the 3 product price:");
    scanf("%d",&ps3);
    printf("\nenter the 3 qty:");
    scanf("%d",&qty1);
    printf("\nenter the 3 qty:");
    scanf("%d",&qty2);
    printf("\nenter the 3 qty:");
    scanf("%d",&qty3);
     totla=(ps1*qty1)+(ps2*qty2)+(ps3*qty3);

     if(totla>=100000)
     {
           disper=10;  
     }
      
    else if(totla>=80000){
        disper=8;
    }
    else if(totla>=50000){
        disper=5;
     }
   else if(totla>=30000){
        disper=3;
    }
   else if(totla>=10000){
       disper=1;
    }
    else{
      disper=0;
    }
     
   disamt=(totla*disper)/100;
   payamt=totla-disamt;
   printf("\ntotla:%f",totla);
   printf("\ndisamt:%f:",disamt);
   printf("\npayamt:%f",payamt); 
  return 0;
}