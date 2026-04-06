#include <stdio.h>

int main ()
{
    char a[100];
    char b[100];

    printf("Digite a primeira string: ");
    gets(a);
    printf("Digite a segunda string: ");
    gets(b);
    printf("String 1: %s \nString 2: %s", a, b);
    printf("\nSegunda letra da string 1: %c\nSegunda letra da string 2: %c\n\n", a[1], b[1]);

    return(0);
}
