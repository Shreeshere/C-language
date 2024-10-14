#include <stdio.h>
int main() {
    int num1=0,num2=0;
    printf("Enter any two number: ");
    scanf("%d %d", &num1,&num2);
    (num1 % 2 == 0) && printf("%d is even number\n",num1) || printf("%d is odd number\n",num1);
    (num2 % 2 == 0) && printf("%d is even number\n",num2) || printf("%d is odd number\n",num2);
    return 0;
}