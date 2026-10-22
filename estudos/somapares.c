#include <stdio.h>

int main(){
    int contador;
    int soma = 0;

    for(contador = 1; contador <= 100; contador++){
       printf("%d\n", contador);

       if(contador % 2 == 0){
            soma = soma + contador;
       }
    }

    printf("%d", soma);

    return 0;
}