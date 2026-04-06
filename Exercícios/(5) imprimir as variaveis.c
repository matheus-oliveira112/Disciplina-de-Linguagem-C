#include <stdio.h>

int global = 10;

int main(){
    int local_1 = 20;
    int local_2 = 30;
    int local_3 = 40;
    int local_4 = 50;
    int local_5 = 60;
    char caracter_1 = 'c';
    char caracter_2 = 'o';
    char caracter_3 = 'e';
    char caracter_4 = 'l';
    char caracter_5 = 'h';
    char caracter_6 = 'a';

    printf("%d %d %d %d %d %d", global, local_1, local_2, local_3, local_4, local_5);
    printf("\n%c%c%c%c%c%c\n\n\n", caracter_1, caracter_2, caracter_3, caracter_4, caracter_5, caracter_6);

return(0);
}
