#include <stdio.h>
#include <math.h>

int main(){
    float rad, seno;

    printf("Digite um valor em radianos (ou 0 para o programa encerrar): ");
    scanf("%f", &rad);
    if(rad!=0){
        seno = sin(rad);
        printf("Seno de %.2f radianos eh: %f", rad, seno);
    }
    printf("\n\n\n\n");

    return(0);
}
