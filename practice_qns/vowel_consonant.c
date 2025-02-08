#include <stdio.h>
int main(){
    char check;
    int i;
    char vowel[]={'A','E','I','O','U','a','e','i','o','u'};
    printf("Enter a character:");
    scanf("%c",&check);
    for (i=0;i<10;i++){
        if (check==vowel[i]){
            printf("it is a vowel");

            }
        else{
            printf("it is a consonant");

        }
    }
return 0;
}
