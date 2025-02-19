// Abhirami
// To print the grade

#include <stdio.h>
int main(){
    char grade;
    printf("\nEnter your grade:");
    grade=getchar();
    switch(grade){
        case 'E':
            printf("\nExcellent");
            break;
        case 'e':
            printf("\nExcellent");
            break;
        case 'V':
            printf("\nVery Good");
            break;
        case 'v':
            printf("\nVery Good");
            break;
        case 'G':
            printf("\nGood");
            break;
        case 'g':
            printf("\nGood");
            break;
        case 'A':
            printf("\nAverage");
            break;
        case 'a':
            printf("\nAverage");
            break;
        case 'F':
            printf("\nFail");
            break;
        case 'f':
            printf("\nFail");
            break;
    }

    return 0;
}
