#include <stdio.h>
int main()
{ 
int n,i=1,factorial=1;
printf("Enter a positive number:");
scanf("%d",&n);
while(i<=n){
factorial=factorial*i;
i++;}
printf("factorial:%d",factorial);
return 0;
}
