#include <stdio.h>
#include <string.h>

int main() {

    char str[100];
    int a;

do {
    printf("Digite uma string para ser lida e impressa ('1' caso queira sair): ");
    gets(str);
    a = strlen(str);
    if (!((a==1)&&(str[0]=='1'))) {
        printf("\t\t\t\t");
        puts(str);
        printf("\n");
    }
}
while(!((a==1)&&(str[0]=='1')));

printf("\n\n\n\n\n");

return (0);
}
