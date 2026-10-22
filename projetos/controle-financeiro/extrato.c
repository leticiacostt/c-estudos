#include <stdio.h>

void menu(float recebimentos[1000][2], float despesas[1000][2])
{
    int num_recebimento = 0;
    int num_despesa = 0;
    int num_operacao = 0;
    int i = 0;
    int j = 0;

    float saldo = 0;

    float vet_extrato[2000][2];

    for (i = 0; i < num_recebimento; i++)
    {
        saldo += recebimentos[i][1];
        vet_extrato[i] = recebimentos[i][1];
    }

    for (j = 0; j < num_despesa; j++)
    {
        saldo -= despesas[i][1];
        vet_extrato[i + j] = 0 - recebimentos[i][1];
    }

    for( j = 0; j < num_operacao; j++ )
    {
        printf("Transacao numero %d no valor de %.2f\n", j+1, vet_extrato[j]);
    }

    printf("Seu saldo é: %.2f\n", saldo);
    printf("Operação foi contabilizada com sucesso!\n");
}