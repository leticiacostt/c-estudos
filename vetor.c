#include <stdio.h>

int main(){
    char nome[8] = "Alfabeto";
    int i = 0;

    for(i = 0; i < 8; i++){
        printf("O caracter %d eh a letra %c\n", i, nome[i]);
    }
}