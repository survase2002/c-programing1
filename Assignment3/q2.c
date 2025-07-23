#include<stdio.h>
int main()
{ 
    int a,b;
    char op;
    printf("enter the a expression::");
    scanf("\n %d %c %d",&a,&op,&b);
    switch (op)
    {
    case '-':printf("%d %c %d = %d",a,op,b,(a-b));break;
    case '+':printf("%d %c %d = %d",a,op,b,(a+b));break;
    case '*':printf("%d %c %d = %d",a,op,b,(a*b));break;
    case '/':printf("%d %c %d = %d",a,op,b,(a/b));break;                  
    
    default:
             printf("invalid opretion");
             break;
    }
    return 0;
}