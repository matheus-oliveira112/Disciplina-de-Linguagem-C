#ifndef FUNCOES_H_INCLUDED
#define FUNCOES_H_INCLUDED

void imprimi(int **matriz, int tamanho_matriz);     //Função utilizada para imprimir a matriz nas diversas atualizações da mesma

int gerar_particula(int **matriz, int tamanho_matriz);      //Função que gera novas particulas a partir da função 'build matriz'

int** build_matrix(int tamanho_matriz);     //Função que gera a matriz inicial composta por zeros e um unico numero 1

void move_particula(int **matriz, int tamanho_matriz, int numero_particula);        //Função que move as particulas geradas por 'gerar_particulas', isto até o momento que se encontre uma outra particula nos arredores da mesma



#endif // FUNCOES_H_INCLUDED
