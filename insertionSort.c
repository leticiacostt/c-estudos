#include <stdio.h>

//insertion Sort
int main(){
    int numeros[6] = {8, 3, 6, 1, 9, 4};
    int chave, j, i;
                             
    for(i = 1; i < 6; i++){                         //percorre o vetor a partir da segunda posição
                      
        chave = numeros[i];                         //guarda o elemento que será inserido
        j = i - 1;                                  //começa a verificar os elementos anteriores

        while(j >= 0 && numeros[j] > chave){        //verifica se o elemento anterior é maior que a chave
            numeros[j + 1] = numeros[j];            //deslocado o elemento maior uma posição para a direita
            j--;                                    //volta uma posição para continuar a comparação
        }

        numeros[j+ + 1] = chave;                    //coloca a chave na posição correta
    }

    for(i = 0; i < 6; i++){                         //mostra o vetor ordenado
        printf("%d\n", numeros[i]);
    }

    return 0;
}