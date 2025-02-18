#include <stdio.h>
int main (){
    char str1[100];
    char str2[100];
    printf("\nEnter your first word:");
    scanf("%s",str1);
    //fgets(str1,sizeof(str1),stdin);
    printf("\nEnter the word you want to concatenate:");
    scanf("%s",str2);
    //fgets(str2,sizeof(str2),stdin);
    int i;
    for(i=0;str1[i]!='\0';i++);
     for (int j=0;str2[j]!='\0';j++){
         str1[i++]=str2[j];
    }
    str1[i]='\0';
    puts(str1);
    return 0;
}
