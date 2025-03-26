#include <stdio.h>
#define pi 3.14159
int main(){
int radius;
printf("Enter the radius of the circle:");
scanf("%d",&radius);
int height;
printf("Enter the height:");
scanf("%d",&height);
int area_cylinder=2*pi*radius*(radius+height);
int area_circle=pi*radius*radius;
printf("\nThe area of circle is:%d",area_circle);
printf("\nThe are of cylinder is:%d",area_cylinder);
return 0;
}

