#include <stdio.h>
int sum(int array[],int limit){
int s=0;
for (int i=0;i<limit;i++){
s=s+array[i];
}
return s;
}
int main(){
int limit;
printf("Enter the limit:");
scanf("%d",&limit);
int array[limit];
printf("Enter the array elements:");
for (int i=0;i<limit;i++){
scanf("%d",&array[i]);}
int arraySum=sum(array,limit);
printf("The Sum of array elements:%d",arraySum);
return 0;
}
 
