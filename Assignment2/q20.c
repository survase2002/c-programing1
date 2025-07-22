#include <stdio.h>

int main() {
    char ch;

    
    printf("Enter a char: ");
    scanf("%c", &ch);

    
    if (ch >='0' && ch <= '9') 
        printf("\n The character is a digit:%d",ch);
      else if (ch >= 'A' && ch <= 'Z')
        printf("\n The uppercase letter:%d",ch);
      else if (ch >='a' && ch <='z')
        printf("\n The lowercase letter:%d",ch);
      else 
        printf("not letter.\n");
    return 0;
}
