#include <stdio.h>

int main(){
    int numeros[6];
    int i, j, temp;

    //receber os valores
    for(i = 0; i < 6; i++){
        printf("Insira um valor: ");
        scanf("%d", &numeros[i]);
    }

    //ordena os valores
    for(i = 0; i < 6 - 1; i++){ //controla o percurso do vetor
        for(j = 0; j < 6 - 1 - i; j++){ //percorre as passaagens
            if(numeros[j] >  numeros[j + 1]){ //troca os elementos de posição

                temp = numeros[j];
                numeros[j] = numeros[j + 1];
                numeros[j + 1] = temp;
            }
        }
    }

    //mostra os valores ordenados
    for(i = 0; i < 6; i++){
    printf("%d\n", numeros[i]);
    }

    return 0;
}