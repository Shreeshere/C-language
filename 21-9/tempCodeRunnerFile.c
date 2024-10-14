#include <stdio.h>

int main() {
    int number;

    printf("Enter an integer: ");
    scanf("%d", &number);
    (number % 2 == 0 && printf("%d is even.\n", number)) || 
    (number % 2 != 0 && printf("%d is odd.\n", number));

    return 0;
}