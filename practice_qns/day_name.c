//Abhirami
//To display day name

#include <stdio.h>
int main(){
   int day;
   printf("\nEnter a number from 0-6:");
   scanf("%d",&day);
   switch(day){
       case 0:
            printf("Number:%d",day);
            printf("\nSunday");
            break;
      case 1:
            printf("Number:%d",day);
            printf("\nMonday");
            break;
     case 2:
            printf("Number:%d",day);
            printf("\nTuesday");
            break;
     case 3:
            printf("Number:%d",day);
            printf("\nWednesday");
            break;
     case 4:
            printf("Number:%d",day);
            printf("\nThursday");
            break;
     case 5:
            printf("Number:%d",day);
            printf("\nFriday");
            break;
     case 6:
            printf("Number:%d",day);
            printf("\nSaturday");
            break;

}
    return 0;

}
