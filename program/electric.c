#include<stdio.h>
int main()
{
    float amt;
    int units;
    printf("enter the units");
    scanf("%f",&units);

    if(units>=100)
    {
        amt=100*8;
        units-=100;
       if(units>=100)
       {
         amt=amt+(100*10);
        units-=100;
          if(units>=100)
       {
        amt=amt+(100*12);
        units-=100;
        
          if(units>=100)
       {
         amt=amt+(100*15);
        units-=100;
          if(units>=100)
       {
        amt=amt+(100*18);
        units-=100;
        
          if(units>=0)
       {
        amt=amt+(100*20);
        units-=100;
        
       }else{
        amt=amt+(units*20);
       }
       }else{
        amt=amt+(units*18);
       }
       }else{
        amt=amt+(units*15);
       }
       }else{
        amt=amt+(units*12);
       }

       }else{
        amt=amt+(units*10);
       }
    }else{
        amt=amt+(units*8);
       }
       printf("%f",amt);
    }
    
