#include <stdio.h>
typedef struct{
int rollNo;
char name[20];
float cgpa;
}student;
int main(){
int n;
printf("Enter the number of students:");
scanf("%d",&n);
student s[n];
for(int i=0;i<n;i++){
printf("\nEnter the name:");
scanf("%s",s[i].name);
//fgets(s1.name,sizeof(s1.name),stdin);
printf("\nEnter the roll number:");
scanf("%d",&s[i].rollNo);
printf("\nEnter CGPA:");
scanf("%f",&s[i].cgpa);}
printf("\nSTUDENT DETAILS");
for(int i=0;i<n;i++){
printf("\n");
printf("Name:");
puts(s[i].name);
printf("Roll number:%d",s[i].rollNo);
printf("\nCGPA:%f",s[i].cgpa);
}
return 0;
}



