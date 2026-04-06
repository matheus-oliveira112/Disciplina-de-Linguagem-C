#include <stdio.h>

void levetor(int *p, int a);

int main() {

int tam;
int j;

printf("Digite o o tamanho do vetor ao qual deseja: ");
scanf("%d", &tam);
int vetor[tam];

levetor(vetor, tam);

printf("O vetor ao final ficou:\n");
for(j=0; j<tam; j++) {
    printf("%5d", vetor[j]);
}

printf("\n\n\n\n");

return(0);
}

void levetor(int *p, int a) {

int i;

for(i=0; i<a; i++) {
    printf("Digite um valor para o espaco numero %d do vetor: ", 1+i);  /*Laço que escaneia os valores do vetor atraves da utilização de um ponteiro */
    scanf("%d", p+i);
}
}
