#include <stdio.h>
struct employee{
int ID;
char name[20];
int salary;
};
int main(){
struct employee e1;
printf("\nEnter the name:");
scanf("%s",e1.name);
//fgets(s1.name,sizeof(s1.name),stdin);
printf("\nEnter the ID:");
scanf("%d",&e1.ID);
printf("\nEnter the salary:");
scanf("%d",&e1.salary);
printf("\nEMPLOYEE DETAILS");
printf("\n");
printf("Name:");
puts(e1.name);
printf("ID:%d",e1.ID);
printf("\nSalary:%d",e1.salary);

return 0;
}



