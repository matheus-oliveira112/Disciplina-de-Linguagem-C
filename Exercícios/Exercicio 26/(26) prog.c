#include <stdio.h>
#include "func.h"
#include "func.c"

int main() {

int a, b;

printf("Digite um valor inteiro: ");
scanf("%d", &a);
printf("Digite um valor inteiro: ");
scanf("%d", &b);
EDivisivel(a, b);
if (EDivisivel(a, b)==1){
        printf("O resto da divisao de a por b eh zero!\n\n\n\n\n");
}
else if (EDivisivel(a, b)==0){
        printf("O resto da divisao de a por b nao eh zero!\n\n\n\n\n");
}

return(0);
}
