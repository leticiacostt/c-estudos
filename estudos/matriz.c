#include <stdio.h>

int main(){
    int matriz[3][3]; 
    int i, j;

    //criando matriz
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("Digite um número pra sua matriz: ");
            scanf("%d", &matriz[i][j]);
        }
    }

    //mostrando a matriz
    printf("Sua matriz: \n");
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("%d ", matriz[i][j]);
        }

        printf("\n");
    }

    return 0;
}