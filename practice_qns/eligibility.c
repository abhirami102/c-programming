#include <stdio.h>
int main(){
    int chem,phy,maths,total=0;
    printf("\nEnter your chemistry marks:");
    scanf("%d",&chem);
    printf("\nEnter your maths marks:");
    scanf("%d",&maths);
    printf("\nEnter your physics marks:");
    scanf("%d",&phy);
    total=maths+phy+chem;
    if (total>=190){
        printf("\nYou are eligible!");
    }
    else if (maths+phy>=140){
    printf("\nYou are eligible!");}
    else{
        printf("\nYou are not eligible");

    }
    return 0;
}
