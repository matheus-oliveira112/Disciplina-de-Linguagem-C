#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "funcoes.h"
#include "funcoes.c"

int main() {
    // Definir o tamanho da matriz
    int tamanho_matriz;
    int numero_particulas;

  do {
    printf("Defina o tamanho 'n' da matriz (n>5): ");   // Loop para ler o tamanho da matriz. Caso o valor esteja em conformidade o loop acaba.
    scanf("%d", &tamanho_matriz);
    if(tamanho_matriz<=5) {
      printf("!Erro digite o valor novamente!\n\n");
    }
  }
    while(tamanho_matriz<=5);

    printf("\n");

    do {
    printf("Digite o numero de particulas 'N' ao qual deseja ver no programa ('N' precisa ser maior que 1 e menor que o quadrado de 'n'): ");       // Loop para ler o numero de particulas. Caso o valor esteja em conformidade o loop acaba.
    scanf("%d", &numero_particulas);
      if((numero_particulas<=1)||(numero_particulas>=(tamanho_matriz*tamanho_matriz))) {
        printf("!Erro digite o valor novamente!\n\n");
      }
      }
      while((numero_particulas<=1)||(numero_particulas>=(tamanho_matriz*tamanho_matriz)));

    printf("\n");

    int **matriz = build_matrix(tamanho_matriz);                //Neste momento   chamada uma fun  o que cria a matriz inicial cheia de zeros e com um 1 em um lugar aleat rio
    move_particula(matriz, tamanho_matriz, numero_particulas);      //Chamada a fun  o que ir  fazer novas particulas surgirem e se agruparem, tudo de forma aleat ria

    // Desaloca mem ria da matriz na fun  o main
    for (int i = 0; i < tamanho_matriz; i++) {
        free(matriz[i]);
    }
    free(matriz);

    printf("\n\n\n\n");

    return 0;
}
