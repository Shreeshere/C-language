#include <stdio.h>

int main() 
{
    char ch;

 
    printf("Enter a character: ");
    scanf("%c", &ch);

    if (ch >= 'a' && ch <= 'z') {
        printf("Converted character is: %c\n", ch-32);
    } 
    if (ch >= 'A' && ch <= 'Z') { 
        printf("Converted character is: %c\n", ch+32);
    } 
    else {
        printf("%c is not an alphabet letter.\n", ch);
    }

    return 0;
}
