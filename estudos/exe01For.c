#include <stdio.h>

int main (){
    int contador;

    for(contador = 1; contador <= 20; contador++){

        if(contador % 2 == 0){
          printf("Par: %d\n", contador);
        }else{
           printf("Impar: %d\n", contador);
        }
    }

    return 0;
}