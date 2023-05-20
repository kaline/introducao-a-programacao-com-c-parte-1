#include <stdio.h>

int main(){
    int numero;
    scanf("%d", &numero);
    int count = 10;
    int mult = 0;

    while(numero <= 10 && numero >= 1){
        mult = numero*count;
        printf("%d*%d= %d \n",numero, count, mult);
        numero--;
        
    }
        
}