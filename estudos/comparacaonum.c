#include <stdio.h>

int a = 20;
int b = 20;

int main()
{
    if(a > b){
        printf("a maior que b!");
    } else if(a < b){
        printf("a menor que b!");
    }else{
        printf("Os dois sao iguais!");
    }

    return 0;
}