#include <stdio.h>

int fibonacci (int tam);

int main() {

int tam, a;

printf("Digite um numero da serie de Fibonacci voce deseja saber (valido ate 46): ");
scanf("%d", &tam);

printf("====================Serie de Fibonacci====================\n");
a = fibonacci(tam);
printf("O resultado do enesimo termo eh: %d", a);
a = fibonacci(tam);

printf("\n\n\n\n");
return(0);
}

int fibonacci (int num) {

if (num>2) {
return (fibonacci(num-1)+fibonacci(num-2));
}
else if (num==2) {
    return (1);
}
else if (num==1) {
    return (1);
}
}

