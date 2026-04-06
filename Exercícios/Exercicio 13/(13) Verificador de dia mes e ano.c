#include <stdio.h>

int main() {

int dia, mes, ano;
int verif;

do {
verif=0;                                                // Condicao necessaria para o laco while acabar
printf("Digite o dia ao qual deseja (de 1 a 31): ");
scanf("%d", &dia);
printf("Digite o mes ao qual deseja (de 1 a 12): ");
scanf("%d", &mes);
printf("Digite o ano ao qual deseja (de 1900 a 2100): ");
scanf("%d", &ano);

if (((dia<1)||(dia>31))||((mes<1)||(mes>12))||((ano<1900)||(ano>2100))) {                                       //verificacao do intervalo proposto
    printf("\t\t!!!!ERRO!!!!\nDia, mes ou ano incodizentes com o intervalo possivel\nDigite Novamente\n\n");
    verif =1;
}
else if (((mes==4)||(mes==6)||(mes==9)||(mes==11))&&(dia==31)&&((ano>=1900)&&(ano<=2100))){                     //verificacao para saber se o mes possui mais de 30 dias ou nao, com excessao de fevereiro
    printf("\t\t!!!!ERRO!!!!\nO mes em questao nao possui mais que 30 dias\nDigite Novamente\n\n");
    verif =1;
}
else if((mes==2)&&((dia==30)||(dia==31))){                                                                  //verificacao do mes de fevereiro em relacao ao fato de haver mais de 29 dias ou nao
    printf("\t\t!!!!ERRO!!!!\nFevereiro nao pode possuir mais que 29 dias\nDigite Novamente\n\n");
    verif =1;
}
else if((mes==2)&&(dia==29)){                                   //verificacao para saber se o ano eh bissexto
    if(((ano%4==0)&&(ano%100!=0))||(ano%400==0)){
    }
    else {
        printf("\t\t!!!!ERRO!!!!\nFevereiro nao possui 29 dias no ano em questao, ou seja o ano nao eh bissexto\nDigite Novamente\n\n");
        verif=1;
    }
}
}
while(verif==1);

if(((ano%4==0)&&(ano%100!=0))||(ano%400==0)){
        printf("\nO ano em questao eh bissexto");
    }

if(mes==1){
    printf("\nA data eh: %d de Janeiro de %d\n\n\n", dia, ano);
}
else if(mes==2){
    printf("\nA data eh: %d de Fevereiro de %d\n\n\n", dia, ano);
}
else if(mes==3){
    printf("\nA data eh: %d de Marco de %d\n\n\n", dia, ano);
}
else if(mes==4){
    printf("\nA data eh: %d de Abril de %d\n\n\n", dia, ano);
}
else if(mes==5){
    printf("\nA data eh: %d de Maio de %d\n\n\n", dia, ano);
}
else if(mes==6){
    printf("\nA data eh: %d de Junho de %d\n\n\n", dia, ano);
}
else if(mes==7){
    printf("\nA data eh: %d de Julho de %d\n\n\n", dia, ano);
}
else if(mes==8){
    printf("\nA data eh: %d de Agosto de %d\n\n\n", dia, ano);
}
else if(mes==9){
    printf("\nA data eh: %d de Setembro de %d\n\n\n", dia, ano);
}
else if(mes==10){
    printf("\nA data eh: %d de Outubro de %d\n\n\n", dia, ano);
}
else if(mes==11){
    printf("\nA data eh: %d de Novembro de %d\n\n\n", dia, ano);
}
else if(mes==12){
    printf("\nA data eh: %d de Dezembro de %d\n\n\n", dia, ano);
}

return(0);
}



