#include <stdio.h>

int maiorNumero(int a, int b){
    if(a > b){
        return a;
    }else{
        return b;
    }
}

int main(){
    int maior;

    maior = maiorNumero(5, 5);
    printf("%d", maior);
}