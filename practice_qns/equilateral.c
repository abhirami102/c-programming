#include <stdio.h>
int main(){
    int side1,side2,side3;
    printf("Enter the three sides of the triangle:");
    scanf("%d %d %d",&side1,&side2,&side3);
    if (side1==side2&&side2==side3){
        printf("It's an equilateral traingle");
    }
    else if (side1==side2 || side1==side3 || side2==side3){
        printf("It's isosceles triangle");

    }
    else{
        printf("It's a scalene triangle");
    }
    return 0;
}
