#include<stdio.h>
#include<ctype.h>
int main()
{
    char ch;
    printf("entre the  character :");
    scanf("%c",&ch);
    ch=tolower(ch);
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
        printf("\n values of%c",ch);
    else
       printf("%c isconsonant",ch);
    return 0;
}