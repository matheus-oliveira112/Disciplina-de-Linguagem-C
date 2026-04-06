#include <stdio.h>

void fibonacci (int tam);

int main() {

int tam;

printf("Digite ate que numero da serie de Fibonacci voce deseja saber (valido ate 46): ");
scanf("%d", &tam);

printf("====================Serie de Fibonacci====================");

fibonacci(tam);

printf("\n\n\n\n\n");

return(0);
}

void fibonacci (int tam) {

int a = 1;
int b = 1;
int i, soma, aux;

for(i=1; i<=tam; i++) {         /* Por algum motivo, quando se faz o laço até a variavel 'tam', o programa se torna bem mais lento inicialmente. É possivel observar uma diferença enorme quando se troca 'tam' por uma constante dentro do laço */
    if (i==1) {
        printf("\nValor 1 = %d\n", a);
    }
    else if (i==2) {
        printf("Valor 2 = %d\n", b);
    }
    else {
        soma = a + b;       /* a é o primeiro termo a ser somado e b o segundo */
        aux = b;
        b = soma;
        a = aux;
        printf("Valor %d = %d\n", i, soma);
    }
}
}
