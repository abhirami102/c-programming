#include <stdio.h>
int main(){
FILE *p;
int line_no=0,wordcount=0,charcount=0;
p=fopen("line.txt","r");
char ch;
while(fscanf(p,"%c",&ch)==1){
if(ch==' '|| ch=='.'){
 wordcount++;
}
if(ch=='.'){
line_no+=1;
}
if(ch!=EOF && ch!=' ' && ch!='\n'){
charcount++;
}
}
printf("wordcount:%d",wordcount);
printf("Line count:%d",line_no);
printf("Line count:%d",charcount);
fclose(p);
return 0;
}
