#include <stdio.h>

int main(){
    float nota1, nota2, media;
    char resp = 's';

    while(resp == 's'){

        printf("Entre com a nota 1: ");
        scanf("%f", &nota1);
        printf("Entre com a nota 2: ");
        scanf("%f", &nota2);

        media = (nota1 + nota2)/2;
        printf("A sua media e: %.2f", media);

        printf("\nDigite 's' para continuar: ");
        scanf(" %c", &resp);
    }

    return 0;
}