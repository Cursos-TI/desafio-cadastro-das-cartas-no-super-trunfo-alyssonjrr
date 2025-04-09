#include <stdio.h>

int main(){

    // criando as variáveis
    float nota1, nota2, media;

    // pedindo ao usuário que informe a primera nota
    printf("Informe sua primeira nota (entre 00.00 e 10.0): ");
    scanf("%f", &nota1);

    //criando uma condição para que o usuário não iforme uma nota menor que 0 nem maior que 10
    while (nota1 < 0 || nota1 > 10) {
        printf("Nota inválida! Digite novamente (entre 00.00 e 10.0): ");
        scanf("%f", &nota1);
    }

    //pedindo ao usuário que informe a segunda nota
    printf("Informe sua segunda nota (entre 00.00 e 10.0): ");
    scanf("%f", &nota2);

    //criando uma condição para que o usuário não iforme uma nota menor que 0 nem maior que 10
    while (nota2 < 0 || nota2 > 10) {
        printf("Nota inválida! Digite novamente (entre 00.00 e 10.0): ");
        scanf("%f", &nota2);
    }

    // aplicando a média
    media = (nota1 + nota2) / 2;

    // mostrando ao usuário sua média
    printf("Sua média é: %.1f\n", media);

    if (media >= 7) { // se a média for maior ou igual a 7 o aluno está aprovado
        printf("Situação: Aprovado\n");
    } else if (media >= 5) {  //se a média for maior ou igual a 5 e menor que 7 o aluno está em recuperação
        printf("Situação: Recuperação\n");
    } else {
        printf("Situação: Reprovado\n"); // se a média for menor que 5 o aluno está reprovado
    }

    return 0;

}