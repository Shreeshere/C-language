#include <stdio.h>

int main(){
    int a = 10.2,b = 25.3,c = 5.4;
    a+=b*=c/=2.2;
    printf("a=%d,b=%d,c=%d",a,b,c);
    return 0;
}