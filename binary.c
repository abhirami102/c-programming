#include <stdio.h>
long int bin(int);
int main(){
    int dec;
    printf("\nEnter the decimal number:");
    scanf("%d",&dec);
    printf("The binary equivalent:%ld",bin(dec));
    return 0;

}
long int bin(int dec){
    int i=1,b=0,reminder;
    while(dec>0){
        reminder=dec%2;
        b=reminder*i+b;
        i=i*10;
        dec=dec/2;
    }
    return b;


}
