#include <stdio.h>

int a = 17;
int b = 5;

int main()
{
    int divisao = (a/b);
    printf("Divisao: %d", divisao);

    int resto = (a % b);
    printf("\nResto: %d", resto);

    return 0;
}