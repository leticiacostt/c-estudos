//calculando imposto de renda de acordo com a tabela vigente
#include <stdio.h> 

int calculo_irpf(float recebimentos[1000][2]){

    float salario, recolhimento;
    int num_recebimento = 0;
    int i = 0;
    salario = 0;

    for(i = 0; i < num_recebimento; i++){
        salario += recebimentos[i][1];
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

    return 0;
}