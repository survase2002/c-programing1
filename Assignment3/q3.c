#include<stdio.h>
int main()
{
    int x,y,ch,v,z ;
    printf("enter the ch::");
    scanf("%d",&ch);
    printf("enter the  two number:");
    scanf("%d%d",&x,&y);

    switch (ch)
    {
        case 1:(x==y)?printf("equal to "):printf("not equal");
                break;
        case 2:(x<y)?printf("less than"):printf("not less than");
                break;
        case 3:v=x/y;
                printf("\nquotient::%d",v);
               v=x%y;
                printf("\nRemainder::%d",v);
               break;      
        case 4: printf("enter the no::");
                scanf("%d",&z);
                (z>x && z<y)?printf("in between"):printf("not between");       
                break;
        case 5:x=x+y;
               y=x-y;
               x=x-y;
               printf("sawp::%d %d",x,y);
               break;
 

        default:
                printf("not equal");
                break;
    }
}