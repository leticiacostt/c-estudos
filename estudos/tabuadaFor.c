#include <stdio.h>

int main(){
    int contador, tabuada, resultado;

    printf("Digite um valor para a sua tabuada: ");
    scanf("%d", &tabuada);

    for(contador = 1; contador <= 10; contador++){
        resultado = contador * tabuada;
        printf("%d X %d: %d\n", contador, tabuada, resultado);
    }

    return 0;
}