#include <stdio.h>

float nota1 = 7.5;
float nota2 = 8.0;
float nota3 = 6.5;

int main(){
    double media = (nota1 + nota2 + nota3)/3;
    printf("Media %.2f", media);

    if(media >= 7){
        printf("\nAluno aprovado!");
    }else if(media >=5){
        printf("\nRecuperação!");
    }else{
        printf("\nAluno reprovado!");
    }

    return 0;
}