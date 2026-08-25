#include <stdio.h>

int numeroPar(int numero){
    if( numero %2 == 0){
        return 1;
    }else{
        return 0;
    }
}

int main(){
    int resultado;

    resultado = numeroPar(9);
    printf("%d", resultado);

    return 0;

}