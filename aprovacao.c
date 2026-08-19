#include <stdio.h>

float nota = 7.5;
int frequencia = 80;

int main(){
    if(nota >= 7 && frequencia >= 75){
        printf("Aluno aprovado!");
    }else{
        printf("Aluno reprovado!");
    }

    return 0;
}