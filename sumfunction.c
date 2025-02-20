//Abhirami
// declaring and calling sum function
#include <stdio.h>
void sum(int,int);
int main(){
    int n1,n2;
    sum(n1,n2);
    return 0;
}
void sum(int n1,int n2){
    int s;
    printf("\nEnter 2 numbers:");
    scanf("%d%d",&n1,&n2);
    s=n1+n2;
    printf("\nSum:%d",s);

}
