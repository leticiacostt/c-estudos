#include <stdio.h>

int main(){
    int contador;
    int quantidade_divisiveis = 0;

    for(contador = 1; contador <= 50; contador++){
        if(contador % 7 == 0){
            printf("Divisivel por 7: %d\n", contador);
            quantidade_divisiveis++; //quantas vezes algo aconteceu
        }
    }

    printf("Quantidade de diviveis: %d", quantidade_divisiveis);
}