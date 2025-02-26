//Abhirami

#include <stdio.h>
void fact();
int main(){
     fact();
     return 0;
}
void fact(){
    int n1,i,factorial=1;
    printf("\n Enter a number:");
    scanf("%d",&n1);
    for (i=1;i<=n1;i++){
     factorial=factorial*i;
    }
    printf("Factorial:%d",factorial);

}
