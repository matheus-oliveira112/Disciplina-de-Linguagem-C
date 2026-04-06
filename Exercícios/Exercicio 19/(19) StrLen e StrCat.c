#include <stdio.h>

void StrLen(int *a, char *tamanho)      /* Função que mede o tamanho de str1 e retorna o valor para funcão main */
{
while (*tamanho)
{
(*a)++;
tamanho++;
}
}

void StrLen1(int *d, char *tamanho1)    /* Função que mede o tamanho de str2 e retorna o valor para funcão main */
{
while (*tamanho1)
{
(*d)++;
tamanho1++;
}
}

void StrCat(int c, char *destino, char *origem)     /* Função que soma as strings 1 e 2*/
{
destino = destino + c;      /* Desloca a memoria da string final no tamanho de str2 */
while (*origem)
{
*destino = *origem;
origem++;
destino++;
}
*destino = '\0';
}

int main()
{
char str1[100];
char str2[100] = "Voce digitou a string: ";
int b = 0;
int c = 0;

printf("Entre com uma string: ");
gets(str1);
StrLen(&b, str1);
StrLen1(&c, str2);
StrCat(c, str2, str1);
printf("\n%s\nEla tem tamanho: %d\n\n\n\n",str2,b);
return(0);
}
