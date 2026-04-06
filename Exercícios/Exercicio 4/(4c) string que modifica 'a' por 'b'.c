#include <stdio.h>

int main(){

char str[100];
int a;
int j = 0;
int k = 0;

printf ("Digite uma string: ");
gets(str);

for(a=0; a<100; a=a+1){
    if (str[a]=='a'){
        j = j+1;
        str[a] = 'b';
    }
}

printf("Numero de caracteres 'a' modificados:%d\nResultado da string:%s\n\n\n\n",j, str);

return(0);
}
