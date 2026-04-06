#include <stdio.h>
int main() {
int x, *p, **q;
p = &x;
q = &p;
x = 10;
printf("\n%d\n", (**q)); /* Foi necessario trocar o endereço do ponteiro para o valor do mesmo */
return(0);
}
