#include <stdio.h>

int main(){
   int contador;
   
    for(contador = 1; contador <= 30; contador++){
        if(contador % 3 == 0){
            printf("Multiplos: %d\n", contador);
        }
   }
   return 0;
}