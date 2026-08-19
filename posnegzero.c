#include <stdio.h>

int numero = -5;

int main()
{
    if(numero < 0){
        printf("Negativo!");
    }
    else if(numero > 0){
        printf("Positivo!");
    }else{
        printf("Zero");
    }

    return 0;
}