#include <stdio.h>
#define x(A) ((A%2==0) ? (0):(1))

int main() {

int a;
int aux;

printf("Digite um numero: ");
scanf("%d", &a);

aux = x(a);

if (aux==0){
    printf("O numero digitado eh par\n\n\n");
}
else if (aux==1) {
    printf("O numero digitado eh impar\n\n\n");
}

return(0);
}

