#include <stdio.h>

int main()
{
    char ab;

    printf("Digite um caracter: ");
    scanf("%c", &ab);
    printf ("Caracter lido: %c\nValor na tabela ASCII: %d\n", ab, ab);

    return (0);
}
