#include <stdio.h>

void add_recebimento()
{
    float recebimentos[1000][2];


    int num_recebimento = 0;
    int num_operacao = 0;

    float valores;

    printf("Entre com o valor do recebimento: ");
    scanf("%f", &valores);

    if(valores > 0)
    {
        recebimentos[num_recebimento][0] = num_recebimento;
        recebimentos[num_recebimento][1] = valores;
        printf("Voce recebeu %.2f reais na operacao numero %d", recebimentos[num_recebimento][1], num_operacao);
        num_operacao++;
        num_recebimento++;

        printf("A operação foi registrada com sucesso!\n");
    }
    else if (valores == 0)
    {
        printf("A operação não foi registrada, pois o valor informado é zero.\n");
    }
}

void add_despesa()
{
    float despesas[1000][2];

    int num_despesa = 0;
    int num_operacao = 0;

    float valores;

    printf("Entre com o valor do recebimento: ");
    scanf("%f", &valores);

    if (valores < 0)
    {
        despesas[num_despesa][0] = num_despesa;
        despesas[num_despesa][1] = valores;
        printf("Voce gastou %.2f reais na operacao numero %d", despesas[num_despesa][1], num_operacao);
        num_operacao++;
        num_despesa++;

        printf("A operação foi registrada com sucesso!\n");
    }
    else if(valores == 0)
    {
        printf("A operação teve valor zero e não foi computada.\n");
    }
}