// Abhirami
// To dtermine leap yer=ar or not

#include <stdio.h>
int main(){
    int year;
    printf("\nEnter any year:");
    scanf("%d",&year);
    if(year%4==0 && year%100!=0 || year%400==0){
       printf("\nLeap year");

    }
    else {
        printf("Not a Leap year");
    }
    printf("\n");
    return 0;

}
