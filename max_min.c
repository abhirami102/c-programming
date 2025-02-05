#include <stdio.h>
int main(){
int i,limit,minimum,maximum,maxPos,minPos;
 printf("Enter the limit:");
 scanf("%d",&limit);
 printf("Enter the array elements:");
 int num[limit];
 for (i=0;i<limit;i++){
  scanf("%d",&num[i]);}
  maximum=num[0];
  minimum=num[1];
  for (i=0;i<limit;i++){
   if(maximum<num[i]){
   maximum=num[i];
   maxPos=i+1;}
   if(minimum>num[i]){
    minimum=num[i];
    minPos=i+1;}
  }
  printf("\nminimum=%d",minimum); 
  printf("\nmaximum=%d",maximum);
  printf("\nmaximum at:%d",maxPos);
  printf("\nminimum at:%d",minPos);
  return 0;
  }
