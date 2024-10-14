#include <stdio.h>

int main() {
    int num1, num2, num3, biggest;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    biggest = (num1 > num2) && ((num1 > num3) && num1 , num3) || ((num2 > num3) && num2 , num3);
    printf("The biggest number is: %d\n", biggest);

    return 0;
}