#include<stdio.h>

int main(){
    int n, last, last2, sum = 0, sum2 = 0;

    scanf("%d", &n);

    while(n != 0){
        last = n % 10;
        sum = sum + last;
        n = n / 10;
        last2 = n % 10;
        sum2 = sum2 + last2;
        n = n / 10;
        }

    if(sum == sum2) {
        printf("Alternate digit sum is same.\n");
    } else {
        printf("Alternate digit sum is not same.\n");
    }

    return 0;
}