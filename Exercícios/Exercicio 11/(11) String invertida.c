#include <stdio.h>
#include <string.h>

int main() {

char str[100];
char str_invertida[100];
int i, j;
int tam;
int a = 0;

printf("Digite uma string: ");
gets(str);
tam = strlen(str);

for(j=tam-1; j>=0; j--){
    str_invertida[a] = str[j];
    a++;
}
str_invertida[tam] = '\0';

printf("\nA string invertida ficou igual a: %s\n\n\n", str_invertida);

return(0);
}

