#include <stdio.h>
#include <string.h>
int main(){
char str1[50];
char str2[50];
printf("\nEnter the first string:");
fgets(str1,sizeof(str1),stdin);
printf("\nEnter the second string:");
fgets(str2,sizeof(str2),stdin);
if(strcmp(str1,str2)==0){
printf("The strings are equal");
}
else{
printf("The strings are not equal");
}
return 0;
}
