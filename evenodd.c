#include <stdio.h>
int main(){
    int num;
    printf("Enter any number:");
    scanf("%d",&num);
    if (num%2==0){
        printf("\nThe given number is an even number");
        }
    else{
        printf("\nThe given number is an odd number");
    }
return 0;
}
