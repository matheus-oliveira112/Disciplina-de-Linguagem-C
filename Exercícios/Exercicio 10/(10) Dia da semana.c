#include <stdio.h>

int main(){

int num_dia;
int a;

for (a=0; a<1; a++) {
printf("Digite um numero de 1 a 7 para receber o dia da semana (Comecando por segunda e indo ate domingo): ");
scanf("%d", &num_dia);

    if(num_dia>=1 && num_dia<=7) {
    if(num_dia==1) {
        printf("O dia da semana eh Segunda-Feira\n\n\n");
    }
    if(num_dia==2) {
        printf("O dia da semana eh Terca-Feira\n\n\n");
    }
    if(num_dia==3) {
        printf("O dia da semana eh Quarta-Feira\n\n\n");
    }
    if(num_dia==4) {
        printf("O dia da semana eh Quinta-Feira\n\n\n");
    }
    if(num_dia==5) {
        printf("O dia da semana eh Sexta-Feira\n\n\n");
    }
    if(num_dia==6) {
        printf("O dia da semana eh Sabado\n\n\n");
    }
    if(num_dia==7) {
        printf("O dia da semana eh Domingo\n\n\n");
    }
    }
    else {
        printf("\t\t\t\t!!!!!!ERRO!!!!!!\n\n");
        a=-1;
    }


}
return (0);
}
