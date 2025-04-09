#include <stdio.h>

int main(){

    // declarando as variáveis
    float celsius, fahrenheit;

    // pedindo ao usuário temperatura em Celsius
    printf("Informe a temperatura em Celsius: ");
    scanf("%f", &celsius);

    // aplicando a fórmula para que a temperatura seja transformada de Celsius para Fahrenheit
    fahrenheit = celsius * 1.8 + 32;

    // mostrando ao usuário a temperatura em Fahrenheit
    printf("A temperatura em Fahrenheit é: %.2f\n", fahrenheit);

    return 0;
}