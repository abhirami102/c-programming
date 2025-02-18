#include <stdio.h>
int main(){
    printf("Enter the string:");
    char str[100];
    fgets(str,sizeof(str),stdin);
    int word_count=0;
    for (int i=0;str[i]!='\0';i++){
        if(str[i]==' '){
        word_count++;}
    }

 word_count ++;
 printf("\nThe no of words in the give string is:%d",word_count);
 printf("\n");
 return 0;
}
