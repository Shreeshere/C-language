#include <stdio.h>

int main() {
    char ch = 'A';

    printf("Character and its ASCII value:\n");
    while (ch <= 'z') {
        printf("%c: %d\n", ch, (int)ch);
        ch++;
    }

    return 0;
}
