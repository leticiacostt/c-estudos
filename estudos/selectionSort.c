#include <stdio.h>

//selection sort
int main(){
    int numeros[6]; //quantidade de elementos do vetor
    int j, i, menor, temp; //variaveis 

    //entrada e preenchimento de dados
    for(i = 0; i < 6; i++){
        printf("Insira um valor: ");
        scanf("%d", &numeros[i]);
    }

    //Selection sort
    //percorre as posições que serão organizadas
    for(i = 0; i < 6 - 1; i++){ 
        menor = i; 

        //percorre o restante da  lista
        //verifica se encontrou um elementor menor
        for(j = i + 1; j < 6; j++){ 
            if(numeros[j] < numeros[menor]){
                //atualiza a posição do menor
                menor = j; 
            }
        }

        //realiza a troca entre o elemento atual e o menor encontrado
        temp = numeros[i];
        numeros[i] = numeros[menor];
        numeros[menor] = temp;  
    }

    //Mostra os dados ordenados
    for(i = 0; i < 6; i++){
        printf("%d\n", numeros[i]);
    }

    return 0;
}