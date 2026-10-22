#include <stdio.h>

int main(){
    int contador, valor;
    int valorPos = 0;
    int valorNeg = 0;
    int zero = 0;

    for(contador = 1; contador <= 8; contador++){
        printf("Insira um valor: ");
        scanf("%d", &valor);

        if(valor > 0){
            valorPos++;
        }else if(valor < 0){
            valorNeg++;
        }else{
            zero++;
        }
    }

    printf("Valores positivos: %d\n", valorPos);
    printf("Valores Negativos: %d\n", valorNeg);
    printf("Zeros: %d", zero);

    return 0;
}