#include <stdio.h>
void readMatrix(int[][10],int,int);
void printMatrix(int[][10],int,int);
int main(){
    int rows,cols;
    printf("\nEnter the row and column:");
    scanf("%d%d",&rows,&cols);
    int matrix[rows][cols];
    readMatrix(matrix,rows,cols);
    printf("\nThe Matrix:\n");
    printMatrix(matrix,rows,cols);
    return 0;
}
void readMatrix(int matrix[][10],int rows,int cols){
    printf("\nEnter the elements");
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            scanf("%d",&matrix[i][j]);

        }
    }
}
void printMatrix(int matrix[][10],int rows,int cols){
    for (int i=0;i<rows;i++){
        for (int j=0;j<cols;j++){
         printf("%d\t",matrix[i][j]);

        }
        printf("\n");
    }

}
