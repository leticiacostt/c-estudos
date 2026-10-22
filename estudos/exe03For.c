#include <stdio.h>

int main(){
    int contador;
    int somapar = 0;
    int somaimpar = 0;

    for(contador = 1; contador <= 100; contador++){

        if(contador % 2 == 0){
            somapar = contador + somapar;
        }else{
            somaimpar = contador + somaimpar;
        }
    }
    printf("Soma dos pares: %d\n", somapar);
    printf("Soma dos impares: %d", somaimpar);
    return 0;
}