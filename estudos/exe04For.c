#include <stdio.h>

int main(){
    int contador;

    for(contador = 1; contador <= 50; contador++){
        if(contador % 4 == 0){
            printf("Div por 4: %d\n", contador);
        }
    }

    return 0;
}