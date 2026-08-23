#include <stdio.h>

int main(){
    int contador;
    float preco;
    float total = 0;

    for(contador = 1; contador <= 5; contador++){
        printf("Insira o preço do produto: ");
        scanf("%f", &preco);

        total = total + preco; ///acumula
    }

    printf("O total de compras e: %.2f", total);
    return 0;
}