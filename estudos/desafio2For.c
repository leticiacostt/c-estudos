#include <stdio.h>

int main(){
    int contador, numero, maior, menor, soma = 0;

    for(contador = 1; contador <= 10; contador++){
        printf("Insira um número: ");
        scanf("%d", &numero);

        soma = soma + numero;

        if(contador == 1){
            maior = numero;
            menor = numero;
        }else{
            if(numero > maior){
                maior = numero;
            }

            if(numero < maior){
                menor = numero;
            }
        }
    }

    printf("\nMaior número: %d\n", maior);
    printf("Menor número: %d\n", menor);
    printf("Soma: %d\n", soma);
    return 0;
}