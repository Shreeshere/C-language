#include<stdio.h>
int main()
{
    int unit=250;
    float bill=0;

    printf("Enter the electricity units consumed: ");
    scanf("%d",&unit);
    if(unit<=50){
        bill=50*0.50;
    }
    else if(unit<=150){
        bill=(50*0.50) + (unit-50)*0.75;
    }
    else if(unit<=250){
        bill=20+75+(unit-150)*1.20;
    }
    else {
        bill=20+75+(100*1.20)+(unit-250)*1.50;
    }
    printf("Total electricity bill: RS. %.2f",bill);
    return 0;
}