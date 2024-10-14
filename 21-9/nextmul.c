#include<stdio.h>
void main()
{
    int a=296;
    int no =a % 10;
    
    no>=5 && printf("num of %d", ((a/10)+1)*10) || printf("num of %d", ((a/10)*10));
} 