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
 printf("\n%d+%d:%d",n1,n2,n1+n2);
 break;
 case '-':
 printf("\n%d-%d:%d",n1,n2,n1-n2);
 break;
 case '/':
 printf("\n%d/%d:%d",n1,n2,n1/n2);
 break;
 case '%':
 printf("\n%d%%d:%d",n1,n2,n1%n2);
 break;
 case '*':
 printf("\n%d*%d:%d",n1,n2,n1*n2);
 break;
  default:
   printf("invalid input");
 }
 return 0;
}
 
 
 
