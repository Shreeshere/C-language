#include<stdio.h>
int main()
{
    int sellingprice,costprice;
    int Profit,Loss,Profit_Percentage,Loss_Percentage;

    printf("Sell price:= ");
    scanf("%d",&sellingprice);

    printf("Cost price:= ");
    scanf("%d",&costprice);

    Profit=sellingprice-costprice;
    Loss=costprice-sellingprice;
    Profit_Percentage=Profit*100/costprice;
    Loss_Percentage=Loss*100/costprice;

    printf("Profit : %d\n",Profit);
    printf("Loss : = %d\n",Loss);
    printf("Profit Percentage := %d\n",Profit_Percentage);
    printf("Loss Percentage := %d\n",Loss_Percentage);

    return 0;

}