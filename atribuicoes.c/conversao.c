#include <stdio.h>

int main(){
    int a = 10;
    int b = 3;
    float resultado = (float) a / b; // 'a' será convertido para float forçadamente

    printf("Resultado: %.2f\n", resultado);

    return 0;
}
