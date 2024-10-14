#include<stdio.h>
int main()
{
    float volume,radius=0;
    scanf("%f",&radius);
    volume = (4.0/3.0)*3.14159*radius*radius*radius;
    printf("Volume of the sphere is: %.2f",volume);
    return 0;
}