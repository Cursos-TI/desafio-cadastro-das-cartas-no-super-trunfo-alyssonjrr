#include <stdio.h>

int main(){

    // delcando a variável
    int numero;

    // peindo ao usuário para que digite um número inteiro
    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    if (numero % 2 == 0) { // se o resto da divisão for = 0 é par
        printf("O número %d é par\n", numero);
    } else {
        printf("O número %d é ímpar\n", numero); // // se o resto da divisão for diferente de 0, é ímpar

    }

    return 0;

}