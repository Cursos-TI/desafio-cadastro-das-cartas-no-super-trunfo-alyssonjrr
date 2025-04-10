#include <stdio.h>

int main(){

    // criação das variáveis
    float altura, peso, imc;
    char repetir;

    // pedindo ao usuário seu peso
    printf("Informe seu peso (kg): ");
    scanf("%f", &peso);

    // pedindo ao usuário sua altura
    printf("Informe sua altura (m): ");
    scanf("%f", &altura);

    // aplicando a regra do imc
    imc = peso / (altura * altura);

    // exibindo o imc
    printf("Seu IMC é: %.2f\n", imc);

    if (imc < 18.5){
        printf("Condição: abaixo do peso\n");
    } else if (imc < 25){
        printf("Condição: Peso normal\n");
    } else if (imc < 30){
    printf("Condição: Sobrepeso\n");
    } else {
    printf("Condição: Obesidade\n");
    }

    return 0;

}