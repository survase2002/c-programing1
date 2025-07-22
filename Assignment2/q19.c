#include<stdio.h>
#include<ctype.h>
int main()
{
    char ch;
    printf("enter the char");
    scanf("%c",&ch);
    ch=toupper(ch);
      printf("letter=%c",ch);
 return 0;
}
