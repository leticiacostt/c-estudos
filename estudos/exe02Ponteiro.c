#include <stdio.h>

int main(){
    int a = 10;
    int b = 20;

    int *pA = &a;
    int *pB = &b;

    printf("O valor de a eh: %d\n", *pA);
    printf("O valor de b eh: %d\n", *pB);

    *pA = 100;
    printf("O valor de a foi alterado para: %d\n", a);

    *pB = 200;
    printf("O valor de b foi alterado para: %d\n", b);

    printf("O novo valor de a eh: %d\n", *pA);
    printf("O novo valor de b eh: %d\n", *pB);

    return 0;
}