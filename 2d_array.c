#include <stdio.h>
int main(){
    int i,j,rows,cols;
    printf("\nEnter the rows and columns:");
    scanf("%d%d",&rows,&cols);
    int array[rows][cols];
    printf("\nEnter the elemnts:");
    for(i=0;i<rows;i++){
        for(j=0;j<cols;j++){
            scanf("%d",&array[i][j]);
        }
    }
     for(i=0;i<rows;i++){
        for(j=0;j<cols;j++){
            printf("%d\t",array[i][j]);}
printf("\n");}
return 0;
     }
