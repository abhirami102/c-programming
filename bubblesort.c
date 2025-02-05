#include <stdio.h>
int main(){
int i,j,limit;
 printf("Enter the limit:");
 scanf("%d",&limit);
 printf("Enter the array elements:");
 int num[limit];
 for (i=0;i<limit;i++){
  scanf("%d",&num[i]);}
  for (i=0;i<limit;i++){
   for(j=0;j<limit-i-1;j++){
    if (num[j]>num[j+1]){
     int temp=num[j];
     num[j]=num[j+1];
     num[j+1]=temp;
     }}}
     printf("The sorted array:\t");
     for(i=0;i<limit;i++){
     printf("%d\t",num[i]);
     }
     return 0;
     }
  
