#include <stdio.h>
int main()
{
 char name[15];
 printf("\nenter your name:");
 fgets(name,sizeof(name),stdin);
 printf("%s\n",name);
 return 0;
}
