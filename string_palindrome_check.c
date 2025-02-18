// didnt fixed yet!


#include <stdio.h>
int main(){
    char str[20];
    printf("\nEnter your word to check:");
    scanf("%s",str);
    //fgets(str,sizeof(str),stdin);
    int length;
    for(length=0;str[length]!='\0';length++);
    int i=length-1;
    for(int j=0;j<length/2;j++){
        if(str[i]!=str[j]){
        printf("\nThe given string is not palindrome");
        return 0;
        }

        i--;
    }
 printf("\nThe given string is not palindrome");

    return 0;
}
