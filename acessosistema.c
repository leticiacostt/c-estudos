#include <stdio.h>

int idade = 20;
int possui_documento = 1;

int main()
{
    if(idade >= 18 && possui_documento == 1){
        printf("Acesso permitido!");
    }else{
        printf("Acesso negado!");
    }

    return 0;
}