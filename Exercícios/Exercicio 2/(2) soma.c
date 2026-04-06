#include <stdio.h>

int main ()
{
    int valor_1, valor_2;
    int soma;

    printf("Digite o primeiro valor a ser lido: ");
    scanf("%d", &valor_1);
    printf("Digite o segundo valor a ser lido: ");
    scanf("%d", &valor_2);
    soma = valor_1+valor_2;
    printf("Valor da soma = %d\n", soma);

    return (0);
}
