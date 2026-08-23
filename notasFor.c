#include <stdio.h>

int main(){
    int contador, nota;
    int soma = 0;

    for(contador = 1; contador <= 5; contador++){
        printf("Digite a sua nota: ");
        scanf("%d", &nota);

        soma = soma + nota;
    }

    printf("Soma das notas: %d", soma);

    return 0;
}