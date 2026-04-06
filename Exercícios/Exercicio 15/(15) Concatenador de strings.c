#include <stdio.h>
#include <string.h>

int main (){

char str_1[100];
char str_2[100];
char str_3[100];
char str_4[100];
char str_final [100];
int tam, tam1, tam2, tam3, tam4;
int i;
int j = 0;
int a = 0;
int b = 0;

printf("Digite 4 palavras para armazenar numa string\n");
printf("Palavra 1: ");
gets(str_1);
tam1 = strlen(str_1);

printf("Palavra 2: ");
gets(str_2);
tam2 = strlen(str_2);

printf("Palavra 3: ");
gets(str_3);
tam3 = strlen(str_3);

printf("Palavra 4: ");
gets(str_4);
tam4 = strlen(str_4);

tam = tam1+tam2+tam3+tam4;

for(i=0; i<tam1; i++){
        str_final[i] = str_1[i];
}
for(i=tam1; i<tam1+tam2; i++){
        str_final[i]= str_2[j];
        j++;
}
for(i=tam1+tam2; i<tam1+tam2+tam3; i++){
        str_final[i]= str_3[a];
        a++;
}
for(i=tam1+tam2+tam3; i<tam; i++){
        str_final[i]= str_4[b];
        b++;
}
str_final[tam]='\0';

printf("\nA string final ficou igual a: %s\n\n\n", str_final);

return(0);
}
