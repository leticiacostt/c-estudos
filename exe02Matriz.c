#include <stdio.h>

int main(){
    int matriz[3][3];
    int i, j, soma = 0;

    //criando a matriz
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("Digite um valor para sua matriz: ");
            scanf("%d", &matriz[i][j]);
        }
    }

    //somando a matriz
    printf("A soma dos elementos da sua matriz eh: \n");
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            soma = soma + matriz[i][j];
        }
    }

    printf("A soma dos elementos da matriz eh: %d\n", soma);
    return 0;
}