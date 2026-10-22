#include <stdio.h>

int main(){
    int contador;

    for(contador = 0; contador <= 20; contador++){ //poderia ter feito aqui para pares contador+=2
        if(contador % 2 == 0){
            printf("%d\n", contador);
        }
    }

    return 0;
}