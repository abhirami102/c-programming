//Author Abhirami

#include <stdio.h>
int power(int n1,int n2){
if (n2==0){
return 1;
}
else{
return n1* power(n1,n2-1);
}
}
int main(){
int n1,n2;
printf("Enter the base and power:");
scanf("%d%d",&n1,  &n2);
printf("Result:%d",power(n1,n2));
return 0;
}

