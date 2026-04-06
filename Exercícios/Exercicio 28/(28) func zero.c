#include <stdio.h>

void zero(int *p, int *k){
(*p)=0;
(*k)=0;
}

int main() {

int a, b;

printf("Digite um valor inteiro: ");
scanf("%d", &a);
printf("Digite um valor inteiro: ");
scanf("%d", &b);
zero(&a, &b);
printf("Os valores apos a utilizacao da funcao sao:\na = %d\nb = %d\n\n\n\n", a, b);

return(0);
}
