#include <stdio.h>

int main() {
    //variáveis
    int i = 10;
    int j = 20;

    //ponteiro
    int *p = &i; //--> p recebe o endereço de memória de i e passa a apontar para i

    
    printf("Valor de i: %d\n", i); // --> Printa o valor da variavel i na tela
    printf("Endereco de i: %p\n", (void*)&i); // --> print o endereço de i na tela, onde o 10 está guardado

    printf("Valor de j: %d\n", j); // --> Printa o valor de J na tela
    printf("Endereco de j: %p\n", (void*)&j); // --> Printa o endereço de memória do J, onde está guardado o valor 20

    printf("Valor de p: %p\n", (void*)p); // --> O valor de p é o endereço de memória de i
    printf("Valor apontado por p: %d\n", *p); // --> print o valor apontado por P = 10

    *p = 100; // -->  altera para 100 o valor da variável que p está apontando (i)

    printf("Novo valor de i: %d\n", i); // --> i passa de 10 para 100 porque *p alterou o valor armazenado em i

    return 0;
}