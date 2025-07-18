
#include<stdio.h>
int main()
{
    char ch;
    printf("enter the anythinng:");
    scanf("%c",&ch);

    if(ch>=65 && ch<=90)
    {
        printf("\ncapital ascii values:%d",ch);
    }
    else if(ch>=97 && ch<=122)
    {
        printf("\nsmall ascii values:%d",ch);
    }
    else if(ch>=48 && ch<=57)
    {
        printf("\ncapital ascii values:%d",ch);
    }
    else
    {
        printf("specila ascii vlues:%d",ch);
    }
    return 0;
}



