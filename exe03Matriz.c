#include <stdio.h>

int main(){
    int matriz[3][3]; 
    int maior = matriz[0][0];
    int i, j;

    //criando matriz
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("Digite um número pra sua matriz: ");
            scanf("%d", &matriz[i][j]);
        }
    }

    //verificando qual o maior valor
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            if(matriz[i][j] > maior){
                maior = matriz[i][j];
            }
        }
    }

    printf("O maior valor eh: %d\n", maior);
    return 0;
}