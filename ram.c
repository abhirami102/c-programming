#include <stdio.h>
int main(){
    int ram,shyam,ajay;
    printf("Enter Ram's age:");
    scanf("%d",&ram);
    printf("Enter shyam's age:");
    scanf("%d",&shyam);
    printf("Enter Ajay's age:");
    scanf("%d",&ajay);
    if (ram<shyam && ram<ajay){
            printf("ram is the youngest");
        }
    else if(shyam<ram && shyam<ajay){
            printf("shyam is the youngest");

        }
    else {
        printf("Ajay is the youngest");
    }
    return 0;

}
