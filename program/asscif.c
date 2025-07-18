#include<stdio.h>
#include<ctype.h>
int main()
{
    char ch;
    printf("enter the anythinng:");
    scanf("%c",&ch);

    if(isupper(ch))
    {
        printf("\ncapital ascii values:%d",ch);
    }
    else if(islower(ch))
    {
        printf("\nsmall ascii values:%d",ch);
    }
    else if(isdigit(ch))
    {
        printf("\nnumber ascii values:%d",ch);
    }
    else
    {
        printf("specila ascii vlues:%d",ch);
    }
    return 0;
}



