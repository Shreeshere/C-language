#include <stdio.h>

int main() {
    int number, firstDigit, lastDigit, sum;
    printf("Enter a three-digit number: ");
    scanf("%d", &number);
    lastDigit = number % 10;
    firstDigit = number / 100;
    sum = firstDigit + lastDigit;
    printf("The sum of the first and last digits is: %d\n", sum);
    return 0;
}
