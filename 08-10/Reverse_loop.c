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
        printf("Palindrome");
    }
    else
    printf("not");

    return 0;
}