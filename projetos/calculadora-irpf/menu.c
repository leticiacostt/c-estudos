#include <stdio.h>
#include "impostoRenda.c"

void menu(){
    int opcao = 0;

    printf("Digite 1 para calcular o imposto de renda: ");
    printf("\nDigite 2 para sair: ");
    scanf("%d", &opcao);

    switch(opcao){
        case 1:
            calculadora();
            break;
        case 2:
            printf("Saindo do programa...");
            break;
        default:
            menu();
            break;
    }
}