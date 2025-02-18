#include <stdio.h>
int main(){
    printf("\nEnter your word:");
    char str[100];
    fgets(str,sizeof(str),stdin);
    int length;
    for(int length=0;str[length]!='\0';length++);
    int i=length-1;
    for (int j=0;j<length/2;j++){
        int temp=str[i];
        str[i]=str[j];
        str[j]=temp;
        i--;
    }
    printf("\nThe reverse of your word is:");
    puts(str);
    return 0;

}
