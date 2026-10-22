#include <stdio.h>

int main(){
    int contador;
    int soma = 0;

    for(contador = 1; contador <= 100; contador++){
        soma = soma + contador;
        printf("%d\n", soma);
    }

    return 0;
}