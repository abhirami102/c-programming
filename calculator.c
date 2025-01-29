#include <stdio.h>
int main(){
 int n1,n2;
 char op;
 printf("enter 2 numbers");
 scanf("%d,%d",&n1,&n2);
 printf("which operation u need");
 scanf(" %c",&op);
 switch(op){
 case '+':
 printf("\nsum:%d",n1+n2);
 break;
 case '-':
 printf("\ndifference:%d",n1-n2);
 break;
 case '/':
 printf("\ndivision:%d",n1/n2);
 break;
 case '%':
 printf("\nreminder:%d",n1%n2);
 break;
 case '*':
 printf("\nproduct:%d",n1*n2);
 break;
 }
 return 0;
}
 
 
 
