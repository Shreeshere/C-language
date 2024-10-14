#include <stdio.h>
int main() {
    int n;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    int sum= n*(n+1)/2;

    printf("Sum = %d",sum);
    return 0;
}