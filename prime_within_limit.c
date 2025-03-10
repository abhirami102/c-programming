#include <stdio.h>
int main(){
    int limit,count;
    printf("\nEnter the limit:");
    scanf("%d",&limit);
    for(int i=2;i<=limit;i++){
        count=0;
        for(int j=1;j<=i;j++){
            if(i%j==0){
                count++;
            }
        }
        if (count==2){
        printf("%d\t",i);

        }

    }
    }
