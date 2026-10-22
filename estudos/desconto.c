#include <stdio.h>

float valor = 80;
int possui_cartao = 1;

int main(){
    if(valor >= 100 || possui_cartao == 1){
        printf("Deconto liberado!");
    }else{
        printf("Deconto negado!");
    }

    return 0;
}