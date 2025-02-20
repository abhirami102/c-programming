// Abhirami
// To print corresponding temperatures

#include <stdio.h>
int main(){
    int temperature;
    printf("\nEnter the temperature (C):");
    scanf("%d",&temperature);
    if (temperature<0){
        printf("\nFreezing weather");
    }
    else if(temperature>=0&&temperature<=10){
        printf("\nVery Cold Weather");
    }
    else if(temperature>=10&&temperature<=20){
          printf("\nCold Weather");
    }
    else if(temperature>=20&&temperature<=30){
        printf("\nNormal Temperature");
    }
    else if(temperature>=30&&temperature<=40){
        printf("\nHot");
    }
    else{
        printf("\nVery Hot");
    }
    printf("\n");
    return 0;
}
