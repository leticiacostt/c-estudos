#include <stdio.h>

void saldo(float recebimentos[1000][2], float despesas[1000][2])
{
    int num_recebimento = 0;
    int num_despesa = 0;
    int num_operacao = 0;
    int i = 0;

    float saldo = 0;

    for (i = 0; i < num_recebimento; i++)
    {
        saldo += recebimentos[i][1];
    }

    for (i = 0; i < num_despesa; i++)
    {
        saldo -= despesas[i][1];
    }

    printf("Seu saldo é: %.2f\n", saldo);
    printf("Operação foi contabilizada com sucesso!\n");
}