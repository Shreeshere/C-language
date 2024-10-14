#include<stdio.h>
int main()
{
    int radius,height;
    float pi=3.14159;
    scanf("%d%d",&radius,&height);

    float A= 2*pi*radius*radius + 2*pi*radius*height;
    printf("surface are:= %.2f\n",A);
    return 0;
}