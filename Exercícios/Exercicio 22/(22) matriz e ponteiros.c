#include <stdio.h>

void matriz_nula(int *p);
void matriz_crescente(int *k);


int main() {

int matriz[100][100];
int i, j;

matriz_nula(matriz[0]);
printf("Matriz nula:\n");
for (i=0; i<100; i++){
    for(j=0; j<100; j++){
        printf ("%d", matriz[i][j]);
    }
    printf("\n\n\n");
}

printf("Matriz crescente:\n");
matriz_crescente(matriz[0]);
for (i=0; i<100; i++){
    for(j=0; j<100; j++){
        printf ("%2d", matriz[i][j]);
    }
}
printf("\n\n\n\n");
return(0);
}


void matriz_nula(int *p) {
int a;
for (a=0; a<10000; a++){
        (*p)=0;
        p++;

}
}

void matriz_crescente(int *k) {
int a;
int aux;
for (a=0; a<10000; a++){
        if (a==0) {
        (*k)=0;
        k++;
        aux=0;
        }
        else {
        (*k)=aux+1;
        aux=(*k);
        k++;
        }

}
}
