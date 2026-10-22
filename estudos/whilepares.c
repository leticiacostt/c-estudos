#include <stdio.h>

int main(){
    int i = 0;

    while(i < 21){
        if(i % 2 == 0){
            printf("\nNumero: %d", i); 
        }
        i++; 
    }
    return 0;
}