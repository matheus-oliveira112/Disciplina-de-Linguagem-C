#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "funcoes.h"

void imprimi(int **matriz, int tamanho_matriz) {        //Função que imprimi a matriz a partir de um loop
  for (int i = 0; i < tamanho_matriz; i++) {
        for (int j = 0; j < tamanho_matriz; j++) {
            printf("%d", matriz[i][j]);
        }
        printf("\n");
  }
}

int gerar_particula(int **matriz, int tamanho_matriz) {
  int i, j;

  do{
     i = rand() % tamanho_matriz;       //Loop que gera valores aleatorios para i e j. Loop só acaba quando o valor da matriz[i][j] é diferente de 1, ou seja 0.
     j = rand() % tamanho_matriz;
  }while(matriz[i][j] == 1);
  matriz[i][j] = 1;
  // Converte coordenadas 2D para 1D.
  return i * tamanho_matriz + j;
}

int** build_matrix(int tamanho_matriz) {
    int **mat, i, j;

    // Alocação dinâmica para a matriz
    mat = malloc(tamanho_matriz * sizeof(int*));
    for (i = 0; i < tamanho_matriz; i++) {
        mat[i] = malloc(tamanho_matriz * sizeof(int));
    }

    // Atribuir valor zero para a matriz
    for (i = 0; i < tamanho_matriz; i++) {
        for (j = 0; j < tamanho_matriz; j++) {
            mat[i][j] = 0;
        }
    }

    // Definir o valor 1 em uma posição aleatória da matriz
    srand(time(NULL));
    int i_aleatorio = rand() % tamanho_matriz;
    int j_aleatorio = rand() % tamanho_matriz;
    mat[i_aleatorio][j_aleatorio] = 1;

    // Imprimir a matriz
    imprimi(mat, tamanho_matriz);

    return mat;     //retorna a matriz
}

void move_particula(int **matriz, int tamanho_matriz, int numero_particulas) {
  int direcao;
  int particulas = 0;           //Contagem do numero de particulas começa com 0

  while(particulas < numero_particulas-1) {                 //Loop que tem a função de controlar o numero de particulas na matriz, vai de 0 a tamanho_matriz-1 (isto porque a funcao que gera a matriz ja vem com uma particula)
    int nova_posicao = gerar_particula(matriz, tamanho_matriz);     // Chama a função que gera novas particulas
    // Converte coordenadas 1D para 2D (ao contrario do que foi feito anteriormente)
    int i_nova = nova_posicao / tamanho_matriz;
    int j_nova = nova_posicao % tamanho_matriz;
    matriz[i_nova][j_nova] = 1;         //Valor 1 é atribuido a essa coordenada

    printf("\n");
    imprimi(matriz, tamanho_matriz);

    while(1){                       //Loop que move a particula gerada, até o instante que há outra particula no arredor da mesma
      direcao = rand() % 4;

      // Se os vizinhos forem 1
      if(((i_nova > 0) && (matriz[i_nova - 1][j_nova] == 1)) ||                         //Condiçaõ que quando satisfeita encerra o loop e retorna para o inicio, gerando assim uma nova particula (ou até mesmo encerrando o programa)
          ((i_nova < tamanho_matriz - 1) && (matriz[i_nova + 1][j_nova] == 1)) ||
          ((j_nova > 0) && (matriz[i_nova][j_nova - 1] == 1)) ||
          ((j_nova < tamanho_matriz - 1) && (matriz[i_nova][j_nova + 1] == 1))) {
        break;
      }


         // Move para cima
          if((direcao==0) && (i_nova > 0)) {
            matriz[i_nova][j_nova] = 0;
            i_nova--;
            matriz[i_nova][j_nova] = 1;
            printf("\n");
            imprimi(matriz, tamanho_matriz);
          }


        // Move para baixo
          if((direcao==1) && (i_nova < tamanho_matriz - 1)) {
            matriz[i_nova][j_nova] = 0;
            i_nova++;
            matriz[i_nova][j_nova] = 1;
            printf("\n");
            imprimi(matriz, tamanho_matriz);
          }

        // Move para esquerda
          if((direcao==2) && (j_nova > 0)) {
            matriz[i_nova][j_nova] = 0;
            j_nova--;
            matriz[i_nova][j_nova] = 1;
            printf("\n");
            imprimi(matriz, tamanho_matriz);
          }

        // Move para direita
          if((direcao==3) && (j_nova < tamanho_matriz - 1)) {
            matriz[i_nova][j_nova] = 0;
            j_nova++;
            matriz[i_nova][j_nova] = 1;
            printf("\n");
            imprimi(matriz, tamanho_matriz);
          }

  }

    particulas++;
 }
}
