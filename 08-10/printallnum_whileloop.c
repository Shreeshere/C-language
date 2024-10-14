#include<stdio.h>
int main()
{
    int n1,n2;

    printf("Enter number: ");
    scanf("%d",&n1);
    printf("Enter num2: ");
    scanf("%d",&n2);

    while(n1<=n2){
        printf("%4d",n1);
        n1++;
    }
    return 0;
}