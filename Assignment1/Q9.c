#include<stdio.h>
int main()
{
    int amt, ten,five,one;
    printf("enter the amt=");
    scanf("%d",&amt);

    ten=amt/10;
    amt=amt%10;

    five=amt/5;
    amt=amt%5;

    one=amt;
    
    printf(" currency of ten notes =%d\n",ten);
    printf(" currency of five notes =%d\n",five);
    printf(" currency of one notes =%d\n",one);

    return 0;


}
