#include <stdio.h>

//criamos os vetores de recebmento e despesas com 1000 posições e 2 colunas, sendo a primeira coluna o número da operação e a segunda coluna o valor da operação
//fontes de renda e despesa.
//alem disso, ele possui dois campos, sendo 1 para o id da operação e outro para o valor da operação, que é um float.

float recebmento[1000][2];
float despesas[1000][2];

int num_operacao = 0;
int num_recebmento = 0;
int num_despesas = 0;

void add_recebimentos()
{
    float valor;

    printf("Entre com o valor do recebimento: \n");
    scanf("%f", &valor);
    
    recebmento[num_recebmento][0] = num_operacao;
    recebmento[num_recebmento][1] = valor;

    printf("Voce recebeu %.2f reais na operacao numero %d", recebmento[num_recebmento][1], num_operacao);
    
    num_recebmento++;
    num_operacao++;

    printf("\nOperacao concluida com sucesso!\n");
}

void add_despesas()
{
    float valor;

    printf("Entre com o valor a ser pago: \n");
    scanf("%f", &valor);
    
    despesas[num_despesas][0] = num_operacao;
    despesas[num_despesas][1] = valor;

    printf("Voce gastou %.2f reais na operacao numero %d", despesas[num_despesas][1], num_operacao);
    
    num_despesas++;
    num_operacao++;

    printf("\nOperacao concluida com sucesso!\n");
}

void saldo()
{
    int i = 0;

    float saldo = 0;

    for (i = 0; i < num_recebmento; i++)
    {
        saldo += recebmento[i][1];
    }

    for (i = 0; i < num_despesas; i++)
    {
        saldo -= despesas[i][1];
    }

    printf("Seu saldo é: %.2f\n", saldo);
    printf("Operação foi contabilizada com sucesso!\n");
}

void extrato()
{
    int i, j;
    float saldo = 0;
    float vec_extrato[2000];

    for (i = 0; i < num_recebmento; i++)
    {
        vec_extrato[i] = recebmento[i][1];
        saldo += recebmento[i][1];
    }
    
    for (j = 0; j < num_despesas; j++)
    {
        vec_extrato[i] = 0 - despesas[j][1];
        saldo -= recebmento[i][1];
    }

    for (j = 0; j < num_operacao; j++)
    {
        printf("Transacao numero %d no valor de %.2f\n", j+1, vec_extrato[j]);
    }

    printf("\nVoce possui um saldo de %.2f reais\n", saldo);
}


void calculo_irpf()
{
    float salario, recolhimento;
    int i;
    salario = 0;

    for(i = 0; i < num_recebmento; i++){
        salario += recebmento[i][1];
    }

    if(salario < 1903.98){
        printf("\nVoce esta isento!");
    }else if(salario > 1903.98 && salario <= 2826.65){

        recolhimento = (salario *7.5/100) - 142.80;
        printf("Voce devera recolher %.2f", recolhimento);
    }else if(salario > 2826.65 && salario <= 3751.05){

        recolhimento = (salario *15/100) - 354.80;
        printf("Voce devera recolher %.2f", recolhimento);
    }else if(salario > 3751.05 && salario <= 4664.68){

        recolhimento = (salario *22.5/100) - 636.13;
        printf("Voce devera recolher %.2f", recolhimento);
    }else if(salario > 4664.68){

        recolhimento = (salario *27.5/100) - 869.36;
        printf("Voce devera recolher %.2f", recolhimento);
    }
}

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
                add_recebimentos();
                break;
            case 2:
                add_despesas();
                break;
            case 3:
                saldo();
                break;
            case 4:
                extrato();
                break;
            case 5:
                calculo_irpf();
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

int main()
{
    menu();
    return 0;
}