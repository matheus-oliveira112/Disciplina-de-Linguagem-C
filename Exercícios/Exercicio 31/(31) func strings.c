#include <stdio.h>
#include <string.h>

void troca(char *p, char *k, int tam);

int main() {

char str1[100];
char str2[100];
int a, b, tam;

printf("Digite uma string: ");
gets(str1);
a = strlen(str1);

printf("Digite uma string: ");
gets(str2);
b = strlen(str2);

if (a>=b) {
    tam = a;
}                       /* Nesta parte eu criei uma variavel para o tamanho da maior string entre as duas */
else {
    tam = b;
}

troca(str1, str2, tam);

printf ("Apos a utilizacao da funcao troca obtivemos:\nString 1 = '%s'\nString 2 = '%s'\n\n\n\n", str1, str2);

return(0);
}

void troca(char *p, char *k, int tam) {

int i, aux;

    for (i=0; i<=tam; i++) {        /* A troca do conteudo das strings é feita em uma laço que vai de i=0 até i=tam */
        aux = *(p);
        *(p) = *(k);        /* Troca realizada a partir de ponteiros */
        *(k) = aux;
        p++;
        k++;

    }
}
