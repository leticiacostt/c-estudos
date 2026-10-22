#include <stdio.h>

int main(){
    int contador;
    int idade;
    int somaIdade = 0;

    for(contador = 1; contador <= 5; contador++){
        printf("Digite a Idade: ");
        scanf("%d", &idade);

        somaIdade = somaIdade + idade; //acumulo de valores
    }

    printf("%d", somaIdade);
    return 0;
}