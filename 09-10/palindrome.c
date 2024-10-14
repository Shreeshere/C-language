#include <stdio.h>

int main() {
    int num, reverse = 0;
  
    printf("Enter a number: ");
    scanf("%d", &num);
      int t = num;

    while (num!=0) {
        
        reverse = reverse*10+num%10;
        num =num/ 10;
    }

    if(reverse==t){
        printf(" %d is palindrome number.",reverse);
    }
    else
    printf(" %d is not palindrome number.",reverse);

    return 0;
}