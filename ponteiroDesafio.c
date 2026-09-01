#include <stdio.h>

int main(){
    int x = 30;
    int y = 60;

    int *pX = &x;
    int *pY = &y;

    printf("O valor de x eh: %d\n", x);
    printf("O endereço de x eh: %p\n", (void*)&x); //me mostra o endereço de x

    printf("O valor de y eh: %d\n", y);
    printf("O endereço de y eh: %p\n", (void*)&y);

    printf("O valor de pX eh: %p\n", (void*)pX); //vai ser o end de memoria do x
    printf("O valor de pY eh: %p\n", (void*)pY); //vai ser o end de memoria do y

    printf("O valor apontado por pX eh: %d\n", *pX); //valor da variavel x
    printf("O valor apontado por pY eh: %d\n", *pY); //valor da variavel y

    *pX = 300;
    *pY = 600;

    printf("O novo valor de x eh: %d\n", x);
    printf("O novo valor de y eh: %d\n", y);


    return 0;
}