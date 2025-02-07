//author:abhirami

#include <stdio.h>
int main(){
 int i,j,rows,cols;
 printf("\nEnter the rows and columns:");
 scanf("%d%d",&rows,&cols);
 int array[rows][cols],matrix[rows][cols],add[rows][cols];
 printf("\nEnter the elements for 1st matrix:");
 for(i=0;i<rows;i++){
  for(j=0;j<cols;j++){
   scanf("%d",&array[i][j]);
   }
  } 
 printf("\nEnter the elements for 2nd matrix:");
 for(i=0;i<rows;i++){
  for(j=0;j<cols;j++){
   scanf("%d",&matrix[i][j]);
   }
  } 
 for(i=0;i<rows;i++){
  for(j=0;j<cols;j++){
   add[i][j]=array[i][j]+matrix[i][j];
   }
   } 
  printf("The first matrix is:");
  printf("\n");
  for (i=0;i<rows;i++){
   for(j=0;j<cols;j++){
    printf("%d\t",array[i][j]);
    }
    printf("\n");
  }
  printf("The second matrix is:");
  printf("\n");
  for (i=0;i<rows;i++){
   for(j=0;j<cols;j++){
    printf("%d\t",matrix[i][j]);
    }
    printf("\n");
  }
  printf("The sum of matrix is:");
  printf("\n");
  for (i=0;i<rows;i++){
   for(j=0;j<cols;j++){
    printf("%d\t",add[i][j]);
    }
    printf("\n");
  }
    return 0;
}
