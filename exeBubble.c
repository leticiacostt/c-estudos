#include <stdio.h>

int main(){
    int numeros[6] ={9, 3, 7, 1, 5, 2};
    int i, j, temp;

    for(i = 0; i < 6 - 1; i++){ //controla o percurso do vetor
        for(j = 0; j < 6 - 1 - i; j++){ //percorre as passaagens
            if(numeros[j] >  numeros[j + 1]){ //troca os elementos de posição

                temp = numeros[j];
                numeros[j] = numeros[j + 1];
                numeros[j + 1] = temp;

            }
        }
    }
    for(i = 0; i < 6; i++){
        printf("%d\n", numeros[i]);
    }

    return 0;
}