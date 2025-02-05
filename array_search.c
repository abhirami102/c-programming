#include <stdio.h>
int main(){
 int i,limit,checkNum,position;
 printf("Enter the limit:");
 scanf("%d",&limit);
 printf("Enter the array elements:");
 int num[limit];
 for (i=0;i<limit;i++){
  scanf("%d",&num[i]);}
 printf("Enter the number you want to check:");
 scanf("%d",&checkNum);
 for (i=0;i<limit;i++){
  if(checkNum==num[i]){
   printf("The given element found in the position:%d",i+1);
   }
   }
   return 0;
   }
