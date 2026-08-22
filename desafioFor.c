#include <stdio.h>

int main(){
    int contador, valor;
    int pares = 0;
    int impares = 0;
    int soma = 0;

    for(contador = 1; contador <=5; contador++){
        printf("Digite o seu valor: ");
        scanf("%d", &valor);

        if(valor % 2 == 0){
            pares++;
        }else{
            impares++;
        }

        soma = soma + valor;
    }

    printf("Pares: %d\n", pares);
    printf("impares: %d\n", impares);
    printf("Soma: %d", soma);

    return 0;
}