#include <stdio.h>

int main(){
    int numero, dobro;
    char resp = 's';

    while(resp == 's'){

        printf("Entre com um valor: ");
        scanf("%d", &numero);

        dobro = 2 * numero;
        printf("O dobro e: %d", dobro);

        printf("\nDeseja continuar? (s/n) ");
        scanf(" %c", &resp);
        
    }

    return 0;
}