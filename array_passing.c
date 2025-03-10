#include <stdio.h>
void readArray(int[],int);
void printArray(int[],int);
int main(){
    int limit;
    printf("\nEnter the limit:");
    scanf("%d",&limit);
    int arr[limit];
    readArray(arr,limit);
    printf("\nThe array:");
    printArray(arr,limit);
    return 0;

}
void readArray(int arr[],int limit){
    printf("\nEnter the elements:");
    for(int i=0;i<limit;i++){
        scanf("%d",&arr[i]);
    }
}
void printArray(int arr[],int limit){
    for(int i=0;i<limit;i++){
        printf("%d\t",arr[i]);
    }

}
