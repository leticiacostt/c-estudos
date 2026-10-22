#include <stdio.h>

int main(){
    int opcao = 0, i , j, temp, menor, chave;
    int numeros[6];
    
    while (opcao != 4){
        printf("\n========== ORDENADOR ==========\n");
        printf("1- Bubble Sort\n");
        printf("2- Selection Sort\n");
        printf("3- Insertion Sort\n");
        printf("4- Sair\n");

        printf("Escolha uma das opções: ");
        scanf("%d", &opcao);

        switch(opcao){
            case 1:
                printf("Bubble Sort\n");

                //entrada de dados do vetor
                for(i = 0; i < 6; i++){
                    printf("Escolha o valor: ");
                    scanf("%d", &numeros[i]);
                }

                //bubble sort
                for(i = 0; i < 6 - 1; i++){
                    for(j = 0; j < 6 - 1 - i; j++){
                        if(numeros[j] > numeros[j + 1]){

                            temp = numeros[j];
                            numeros[j] = numeros[j + 1];
                            numeros[j + 1] = temp;
                        }
                    }
                }

                //mostrando os dados 
                printf("Numeros ordenados: ");
                for(i = 0; i < 6; i++){
                    printf("%d ", numeros[i]);
                } 
                break;

            case 2:
                printf("Selection Sort\n");

                for(i = 0; i < 6; i++){
                    printf("Escolha o valor: ");
                    scanf("%d", &numeros[i]);
                }

                for(i = 0; i < 6 - 1; i++){
                    menor = i;

                    for(j = i + 1; j < 6 ; j++){
                        if(numeros[j] < numeros[menor]){
                            menor = j;
                        }
                    }
                    temp = numeros[i];
                    numeros[i] = numeros[menor];
                    numeros[menor] = temp;
                }

                printf("Numeros ordenados: ");
                for(i = 0; i < 6; i++){
                    printf("%d ", numeros[i]);
                }

                break;

            case 3:
                printf("Insertion Sort\n");

                for(i = 0; i < 6; i++){
                    printf("Escolha o valor: ");
                    scanf("%d", &numeros[i]);
                }

                for(i = 1; i < 6; i++){

                    chave = numeros[i];
                    j = i -1;

                    while (j >= 0 && numeros[j] > chave){
                        numeros[j + 1] = numeros[j];
                        j--;
                    }

                    numeros[j + 1] = chave;
                }

                printf("Numeros ordenados: ");
                for(i = 0; i < 6; i++){
                    printf("%d ", numeros[i]);
                }
            
                break;

            case 4:
                printf("Sair");
                break;

            default:
                printf("Opção inválida!\n");
                break;
            
        }
    }

    return 0;
}