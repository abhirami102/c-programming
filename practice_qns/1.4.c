#include <stdio.h>
int main(){
    int cost_price,selling_price,loss=0,profit=0;
    printf("\nEnter the cost price of your item:");
    scanf("%d",&cost_price);
    printf("\nEnter the selling price of your item:");
    scanf("%d",&selling_price);
    if(cost_price<selling_price){
        profit=selling_price-cost_price;
        printf("\nYou made a profit of:%d",profit);
    }
    else{
        loss=cost_price-selling_price;
        printf("\nYou got a loss of:%d",loss);
    }
    printf("\n");
    return 0;
}
