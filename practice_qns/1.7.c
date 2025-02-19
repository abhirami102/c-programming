//Abhirami
//To print percentage and result

#include <stdio.h>
int main(){
    int roll_no,mark1,mark2,mark3;
    float percentage,total;
    char name[30];
    printf("\nEnter your name:");
    fgets(name,sizeof(name),stdin);
    printf("\nEnter your Roll number:");
    scanf("%d",&roll_no);
    printf("\nEnter the mark of first subject out of 100:");
    scanf("%d",&mark1);
    printf("\nEnter the mark of second subject out of 100:");
    scanf("%d",&mark2);
    printf("\nEnter the mark of third subject out of 100:");
    scanf("%d",&mark3);
    total=mark1+mark2+mark3;
    percentage=(total/300)*100;
    if (percentage>=75){
        printf ("\nName:%s",name);
        printf("Roll No:%d",roll_no);
        printf("\nTotal Marks Obtained:%f",total);
        printf("\nResult:First class with Distinction!");
    }
    else if (percentage>=60 && percentage<=75){
        printf ("\nName:%s",name);
        printf("Roll No:%d",roll_no);
        printf("\nTotal Marks Obtained:%f",total);
        printf("\nResult:First class");
    }
    else {
        printf ("\nName:%s",name);
        printf("Roll No:%d",roll_no);
        printf("\nTotal Marks Obtained:%f",total);
        printf("\nResult:Second class");
    }
    printf("\n");
    return 0;
}
