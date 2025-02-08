#include <stdio.h>
int main(){
    int length,breadth,area=0,perimeter=0;
    printf("Enter the length of the rectangle:");
    scanf("%d",&length);
    printf("Enter the breadth of the reactangle");
    scanf("%d",&breadth);
    area=length*breadth;
    perimeter=2*(length+breadth);
    if (area>perimeter){
        printf("Area is greater than the perimter");
    }
    else if (area==perimeter){
        printf("Both area and the perimeter are equal");
    }
    else {
        printf("Area is not greater than perimter");
    }
    return 0;
}
