#include <stdio.h>

int main(){
    float nota1, nota2, media;
    char resp = 's';

    while(resp == 's'){
        printf("Digite a primeira nota: ");
        scanf("%f", &nota1);
        printf("Digite a segunda nota: ");
        scanf("%f", &nota2);

        media = (nota1 + nota2)/2;
        printf("A media e: %.2f\n", media);

        if(media >= 7){
            printf("Aluno(a) aprovado!\n");
        }else if(media >= 5){
            printf("Aluno(a) de recuperação!\n");
        }else{
            printf("Aluno(a) reprovado!\n");
        }

        printf("Deseja calcular outra média? (s/n)");
        scanf(" %c", &resp);
    }

    return 0;
}