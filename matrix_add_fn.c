#include <stdio.h>
void readMatrix(int matrix1[][10],int,int);
void printMatrix(int matrix2[][10],int,int);
void addMatrix(int matrix1[][10],int matrix2 [][10],int add[][10],int,int);
int main(){
    int rows,cols;
    printf("\nEnter the row and column:");
    scanf("%d%d",&rows,&cols);
    int matrix1[10][10];
    int matrix2[10][10];
    int add[10][10];
    readMatrix(matrix1,rows,cols);
    printf("\nEnter elements for second matrix");
    readMatrix(matrix2,rows,cols);
    addMatrix(matrix1,matrix2,add,rows,cols);
    printf("\nThe first Matrix:\n");
    printMatrix(matrix1,rows,cols);
    printf("\nThe second Matrix:\n");
    printMatrix(matrix2,rows,cols);
    printf("\nThe sum Matrix:\n");
    printMatrix(add,rows,cols);
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
void addMatrix(int matrix1[][10],int matrix2[][10],int add[][10],int rows,int cols){
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            add[i][j]=matrix1[i][j]+matrix2[i][j];
    }
}
}
