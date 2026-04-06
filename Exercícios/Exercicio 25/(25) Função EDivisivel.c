#include <stdio.h>

int EDivisivel(int a, int b);

int main() {

int a, b;
int aux;

printf("Digite um valor inteiro: ");
scanf("%d", &a);
printf("Digite um valor inteiro: ");
scanf("%d", &b);

aux = EDivisivel(a, b);

if (aux==1){
        printf("O resto da divisao de a por b eh zero!\n\n\n\n\n");
}
else if (aux==0){
        printf("O resto da divisao de a por b nao eh zero!\n\n\n\n\n");
}

return(0);
}

int EDivisivel(int a, int b){
if(a%b==0){
    return(1);      /* Retorna 1 quando o resto da divisao é zero */
}
else {
    return(0);      /* Retorna 0 quando o resto da divisao é 1 */
}
}
