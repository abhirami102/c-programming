#include <stdio.h>
struct student{
int rollNo;
char name[20];
int m1;
int m2;
int m3;
};
int main(){
int limit;
printf("Enter the number of students:");
scanf("%d",&limit);
struct student s[limit];
for(int i=0;i<limit;i++){
printf("\nEnter the name:");
scanf("%s",s[i].name);
//fgets(s1.name,sizeof(s1.name),stdin);
printf("\nEnter the roll number:");
scanf("%d",&s[i].rollNo);
printf("\nEnter mark 1:");
scanf("%d",&s[i].m1);
printf("\nEnter mark 2:");
scanf("%d",&s[i].m2);
printf("\nEnter mark 3:");
scanf("%d",&s[i].m3);
}
int total=0,average=0;
for(int i=0;i<limit;i++){
 total=s[i].m1+s[i].m2+s[i].m3;
 average=s[i].m1+s[i].m2+s[i].m3/limit;
}
printf("\nSTUDENT DETAILS");
for(int i=0;i<limit;i++){
printf("\n");
printf("Name:");
puts(s[i].name);
printf("Roll number:%d",s[i].rollNo);
printf("\nMark 1:%d",s[i].m1);
printf("\nMark 2:%d",s[i].m2);
printf("\nMark 3:%d",s[i].m3);
}
printf("\nAverage mark of %d students:%d",limit,average);
printf("\nTotal mark of %d students:%d",limit,total);
return 0;
}
