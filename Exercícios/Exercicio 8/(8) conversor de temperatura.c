#include <stdio.h>

int main(){
    float fahr;
    int a;

    printf("\t\t\tCONVERSOR DE GRAUS CELSIUS PARA FAHRENHEIT\n\n");
    for(a=-100; a<=100; a = a+1){
        fahr = (1.8*a)+32;
        printf("Graus = %d --> Faherenheit = %.1f\n", a, fahr);
    }
    printf("\n\n\n\n");

    return(0);
}
