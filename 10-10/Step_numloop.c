#include<stdio.h>

int main(){
    int n, r1,r2,f=1;

    scanf("%d", &n);
    
    r1=n%10;//3
    n/=10;
    while(n != 0){//12
        r2=n%10;//2
        if(r1-r2==1||r2-r1==1)
        {
            r1=r2;
        }
        else
        {
            f=0;break;
        }
        n/=10;
        }

    if(f) {
        printf("It is a step number");
    } else {
        printf("It is not a step number\n");
    }

    return 0;
}