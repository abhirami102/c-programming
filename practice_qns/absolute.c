#include <stdio.h>
int main(){
    int number,positive;
    printf("\nEnter a number:");
    scanf("%d",&number);
    if (number<0){
        positive=-1*number;
        printf("\nThe absolute value is:%d",positive);
    }
    else{
         printf("The absolute value is:%d",number);
        }
    return 0;
}
