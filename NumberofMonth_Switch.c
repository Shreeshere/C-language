#include<stdio.h>
int main(){
    int Month_num;
    printf("Month number: ");
    scanf("%d",&Month_num);

    switch(Month_num){
        case 1:case 3:case 5:case 7:case 8:case 10:case 12:
        printf("31 Days\n");
        break;
        case 4:case 6:case 9:case 11:
        printf("30 Days\n");
        break;
        case 2:
        printf("depending on leap year\n");
        break;
    }
}