#include<stdio.h>
int main(){
    float radius ,circle;
    int side , square;
    
    printf("enter radius := ");
    scanf("%f", &radius);
    printf("enter side := ");
    scanf("%d", &side);

    circle = 3.14 * radius * radius;
    square = side * side;

    printf("Area of Circle is: %.2f\n", circle);
    printf("Area of Square is: %d", square);

    return 0;
}