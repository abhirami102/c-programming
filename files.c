#include <stdio.h>
int main(){
 FILE *fp;
 fp=fopen("file.txt","w");
 putc('a',fp);
 fclose(fp);
 fp=fopen("file.txt","r");
 char ch=getc(fp);
 printf("%c",ch);
 printf("\n");
 fclose(fp);
 return 0;
 }
