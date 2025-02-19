#include <stdio.h>
int main(){
    char str[50];
    char str2[100];
    int i=0;
    printf("\nEnter the string you want to copy:");
    fgets(str,sizeof(str),stdin);
    //while(str[i]!='\0'){
        //str2[i]=str[i];
        //i++;
    //}
     for (i=0;str[i]!='\0';i++){
        str2[i]=str[i];
    }
    str[i]='\0';
    printf("\nThe copied string:%s",str2);
    //puts(str2);

return 0;

}
