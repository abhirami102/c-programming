#include <stdio.h>
int main(){
    char ch[100];
    printf("\nEnter a string:");
    fgets(ch,sizeof(ch),stdin);
    for(int i=0;ch[i]!='\0';i++){
    if(ch[i] >='A' && ch[i]<='Z'){
        ch[i]=ch[i]+32;
    }
    else if(ch[i] >='a' && ch[i]<='z'){
        ch[i]=ch[i]-32;
    }
    }
    puts(ch);
    return 0;
}
