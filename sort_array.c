#include <stdio.h>
void sort(int[],int);
int main(){
    int limit;
    printf("Enter the limit:");
    scanf("%d",&limit);
    int array[limit];
    printf("Enter the elements:");
    for(int i=0;i<limit;i++){
        scanf("%d",&array[i]);
    }
    sort(array,limit);
    printf("The sorted array:");
    for (int i=0;i<limit;i++){
        printf("%d\t",array[i]);
    }
    return 0;

}
void sort(int array[],int limit){
    for(int i=0;i<limit-1;i++){
        for (int j=0;j<limit-i-1;j++){
            if(array[j]>array[j+1]){
                int temp=array[j];
                array[j]=array[j+1];
                array[j+1]=temp;
            }
        }
    }

}
