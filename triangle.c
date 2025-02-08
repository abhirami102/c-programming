#include <stdio.h>
int main(){
    int angle1,angle2,angle3;
    printf("\nEnter the  angles of the triangle:");
    scanf("%d%d%d",&angle1,&angle2,&angle3);
    if (angle1+angle2+angle3==180){
        printf("\nThe given triangle is valid");
    }
    else {
        printf("\nThe given triangle is not valid\n");
    }
    return 0;
}
