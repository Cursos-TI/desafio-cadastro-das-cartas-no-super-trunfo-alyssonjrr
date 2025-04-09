#include <stdio.h>

int main(){

    // declarando as variáveis
    int a, b, aux;

    printf("Digite o primeiro número: ");
    scanf("%d", &a);

    printf("Digite o segundo número: ");
    scanf("%d", &b);

    printf("Antes da troca: a = %d, b = %d\n", a, b);

    aux = a;
    a = b;
    b = aux;

    printf("Depois da troca: a = %d, b = %d\n", a, b);

    return 0;
}