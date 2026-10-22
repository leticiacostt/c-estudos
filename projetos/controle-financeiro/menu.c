#include <stdio.h>

void menu()
{
    int temp = 1;
    int opcao = 0;
    while(temp == 1)
    {
        printf("\n\nEntre com a opção desejada:\n");
        printf("\nDigite 1 para adicionar um recebimento\n");
        printf("\nDigite 2 para adicionar uma despesa\n");
        printf("\nDigite 3 para saldo\n");
        printf("\nDigite 4 para Extrato\n");  
        printf("\nDigite 5 para calculo do IRPF\n");
        printf("\nDigite 9 para sair\n");

        scanf("%d", &opcao);

        switch(opcao)
        {
            case 1:
                add_recebimento();
                break;
            case 2:
                add_despesa();
                break;
            case 3:
                saldo();
                break;
            case 4:
                extrato();
                break;
            case 5:
                irpf();
                break;
            case 9:
            printf("Saindo do programa...\n");
                temp = 0;
                break;
            default:
                printf("Opção invalida!\n");
                menu();
                break;
        }
    }
}