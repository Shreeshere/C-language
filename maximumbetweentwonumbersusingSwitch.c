#include<stdio.h>
int main(){
    int num1,num2;
    scanf("%d%d",&num1,&num2);

    switch(num1>num2){
    case 1:
    printf("%d is Maximum.",num1);
    break;
    case 2:
    if (num1==num2){
        printf("Both are equal.",num1,num2);}
        
    default:
    printf("%d is Maximum.",num2);
    }
    return 0;
}