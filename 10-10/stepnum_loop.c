#include <stdio.h>
#include <stdlib.h>

int isStepNumber(int n) {
    int prev_digit = -1, current_digit;

    while (n > 0) {
        current_digit = n % 10;  

        if (prev_digit != -1) {
            if (abs(prev_digit - current_digit) != 1) {
                return 0;  
        }

        prev_digit = current_digit;  
        n /= 10; 
    }

    return 1;  
}
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (isStepNumber(num)) {
        printf("%d is a step number.\n", num);
    } else {
        printf("%d is not a step number.\n", num);
    }

    return 0;
}