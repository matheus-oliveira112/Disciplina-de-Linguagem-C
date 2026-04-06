#include <stdio.h>
int main() {
int y, *p, x; y = 0;
p = &y;     /* Neste comando o endereço de y é anexado ao ponteiro p, o valor de *p é igual a zero */
x = *p;     /* O valor do ponteiro p é atribuido a x, x igual a zero*/
x = 4;      /* O valor 4 é atribuido a x     */
(*p)++;     /* Mais um é incrementado ao valor do ponteiro p */
x--;        /* Menos um é incrementado a x */
(*p) += x;      /* O valor do ponteiro p tem agora o valor do ponteiro anterior mais x, e como y tem o mesmo endereço que o ponteiro agora ele tem também esse valor (4) */
printf("y = %d\n", y);
return(0);
}
