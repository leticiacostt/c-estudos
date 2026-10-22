#include <stdio.h>

int numero = 10;

int main()
{
    printf("Numero: %d", numero);

    int antecessor = (numero - 1);
    printf("\nAntecessor: %d", antecessor);

    int sucessor = (numero + 1);
    printf("\nSucessor: %d", sucessor);

    return 0;
}