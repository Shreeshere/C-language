#include<stdio.h>
int main(){
    char ch;
    printf("Enter Character: ");
    scanf("%c",&ch);
    if(ch>='A' && ch<='Z')ch+=32;
    if(ch>='a' && ch<='z'){
        switch(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'){
            case 1:
            printf("Vowel",ch);
            break;
            default:
            printf("Consonant",ch);
        }
    }
        else if(ch>=0 && ch<=9) printf("Digit",ch);
        else
        printf("Special character");
}