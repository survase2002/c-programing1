#include<stdio.h>
#include<ctype.h>
int main()
{
    int ch;
    printf("enter the anythinng:");
    scanf("%d",&ch);

    if(ch>='A' && ch<='Z')
    {
        printf("\ncapital ascii values:%c",ch);
    }
    else if(ch>='a' && ch<='z')
    {
        printf("\nsmall ascii values:%c",ch);
    }
    else if(ch>='0' && ch<='9')
    {
        printf("\nnumber ascii values:%c",ch);
    }
    else
    {
        printf("specila ascii vlues:%c",ch);
    }
    return 0;
}



