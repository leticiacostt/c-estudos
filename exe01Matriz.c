#include <stdio.h>

int main(){
    int matriz[3][3];
    int i, j;

    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("Digite um valor para sua matriz: ");
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("Sua matriz é essa: \n");
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("%d ", matriz[i][j]);
        }

        printf("\n");
    }

    return 0;
}