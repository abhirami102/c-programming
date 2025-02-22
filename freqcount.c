// Abhirami
// to count the frequency of letters in a string

#include <stdio.h>
int main(){
    int freq[26]={0};
    char string[100];
    printf("Enter your string:");
    fgets(string,sizeof(string),stdin);
    for(int i=0;string[i]!='\0';i++){
    char ch=string[i];
    if (ch>='A'&& ch<='Z'){
        ch=ch+32;
    }
    if(ch>='a'&& ch<='z'){
        freq[ch-97]++;
    }
    }
    for(int i=0;i<26;i++){
        if(freq[i]>0){
            printf("\n%c:%d",i+97,freq[i]);
        }
    }
printf("\n");
    return 0;
}
