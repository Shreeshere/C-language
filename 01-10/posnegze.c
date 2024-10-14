#include<stdio.h>
int main()
{
    int n;
    scanf("Enter num: %d",&n);
    if (n>=1){
        printf("Positive number ",n);
    }
    else if (n<0){
        printf("Negative number",n);
    }
    else{ printf("zero",n);}
    return 0;
}