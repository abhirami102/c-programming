#include <stdio.h>
struct student{
int rollNo;
char name[20];
int m1;
int m2;
int m3;
float cgpa;
};
int main(){
struct student s1;
printf("\nEnter the name:");
scanf("%s",s1.name);
//fgets(s1.name,sizeof(s1.name),stdin);
printf("\nEnter the roll number:");
scanf("%d",&s1.rollNo);
printf("\nEnter mark 1:");
scanf("%d",&s1.m1);
printf("\nEnter mark 2:");
scanf("%d",&s1.m2);
printf("\nEnter mark 3:");
scanf("%d",&s1.m3);
printf("\nEnter CGPA:");
scanf("%f",&s1.cgpa);
printf("\nSTUDENT DETAILS");
printf("\n");
printf("Name:");
puts(s1.name);
printf("\nRoll number:%d",s1.rollNo);
printf("\nMark 1:%d",s1.m1);
printf("\nMark 2:%d",s1.m2);
printf("\nMark 3:%d",s1.m3);
printf("\nCGPA:%f",s1.cgpa);
return 0;
}



