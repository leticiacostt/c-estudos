#include <stdio.h> 

int main(){
    int numero = 50;
    int *p = &numero;

    printf("Valor da variavel numero: %d\n", numero);
    printf("Endereço da variavel numero: %p\n", (void*)&numero);

    printf("O valor de P eh: %p\n", (void*)p);
    printf("O valor apontado por p eh: %d\n", *p);

    *p = 100;
    printf("O novo valor da variavel numero eh: %d\n", numero);

    return 0;
}