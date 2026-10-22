#include <stdio.h>

int main(){
    int opcao;

    printf("========== MENU ==========");
    printf("\n1- Python");
    printf("\n2- C");
    printf("\n3- Java");
    printf("\n4- Sair");

    printf("\nEscolha uma opcao: ");
    scanf("%d", &opcao);

    switch(opcao){
        case 1:
            printf("Python");
            break;
        
        case 2:
            printf("C");
            break;

        case 3:
            printf("Java");
            break;
            
        case 4:
            printf("Sair");
            break;

        default:
            printf("Opcao inválida! Escolha um numero de 1 a 4.");
    }

}