#include <stdio.h>

int main(){
    int contador;
    int mult = 0;

    for(contador = 1; contador <= 50; contador++){
        if(contador % 5 == 0){
            mult++;
        }
    }
    printf("%d", mult);
}