
#include <stdio.h>

//Bubble Sort
int main(){
    int numeros[6] = {7, 2, 4, 1, 5, 0};
    int i, j, temp;

    //controla quantas passagens fizemos pelo vetor
    for(i = 0; i < 6 - 1; i++){ 
        //percorre o vetor comparando os elementos vizinhos
        for(j = 0; j < 6 - 1 - i; j++){ 
            //verifica se o elemento da esquerda é maior que o elemento da direita
            if(numeros[j] > numeros[j + 1]){ 
                
                //troca os elementos de posição
                temp = numeros[j]; 
                numeros[j] = numeros[j + 1];
                numeros[j + 1] = temp;
            }
        }
    }

    //mostra o vetor ordenado
    for(i = 0; i < 6; i++){ 
        printf("%d\n", numeros[i]);
    }

    return 0;
}