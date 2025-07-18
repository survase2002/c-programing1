#include <stdio.h>

int main() 
{
    int a, b, c;

    printf("Enter two a & b=");
    scanf("%d %d", &a,&b);

    printf("befor swapping: a=%d,b=%d\n",a,b);
    a=a+b;
    b=a-b;
    c=a-b;
    printf("After swapping: a = %d, b = %d\n", a,b);

    a=a*b;
    b=a/b;
    c=a/b;
    printf("After swapping: a = %d, b = %d\n", a,b);
    
    return 0;
}