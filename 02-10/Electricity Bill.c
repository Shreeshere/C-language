#include<stdio.h>
int main()
{
    int unit=250;
    float bill=0;

    if(unit<=50){
        bill=50*0.25;
    }
    else if(unit<=150){
        bill=(50*0.25) + (50*0.25)*0.75;
    }
    else if(unit<=250){
        bill=20+75+(unit-150*1.20);
    }
    return 0;
}