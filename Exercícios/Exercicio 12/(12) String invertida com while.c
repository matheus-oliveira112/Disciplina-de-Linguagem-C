#include <stdio.h>
#include <string.h>

int main() {

char str[100];
char str_invertida[100];
int i, j;
int tam;


printf("Digite uma string: ");
gets(str);
tam = strlen(str);

j = tam-1;
i = 0;

do
{
            str_invertida[i] = str[j];
            j--;
            i++;
}
while((j>=0) && (i<=tam-1));

str_invertida[tam] = '\0';

printf("\nA string invertida ficou igual a: %s\n\n\n", str_invertida);

return(0);
}
