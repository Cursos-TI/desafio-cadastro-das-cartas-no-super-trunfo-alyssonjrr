#include <stdio.h>

int main(){

    // criação das variáveis do número 1 e número 2
    int numero1, numero2;

    // criação das variáveis dos operadores matemáticos / o exercicio pede que a divisão seja em float
    int soma, subtracao, multiplicacao;
    float divisao;

    // pedindo ao usuário para inserir o primeiro número inteiro
    printf("Digite o primeiro número inteiro: \n");
    scanf("%d", &numero1);

    // peindo ao usuário para inserir o segundo número interiro
    printf("Digite o segundo núemro inteiro: \n");
    scanf("%d", &numero2);

    // soma
    soma = numero1 + numero2;

    // subtração
    subtracao = numero1 - numero2;

    // multiplicação
    multiplicacao = numero1 * numero2;

    // divisão
    divisao = (float)numero1 / numero2;

    // mostrando na tela os resultados

    printf("A soma é: %d\n", soma);
    printf("A subtração é: %d\n", subtracao);
    printf("A multiplicação é: %d\n", multiplicacao);
    printf("A divisão é: %f\n", divisao);

    return 0;

}