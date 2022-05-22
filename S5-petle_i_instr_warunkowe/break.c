#include <stdio.h>

int main(){

    float liczba, suma = 0;

    for(int i = 1; i <=6; ++i){
        printf("Podaj liczbe %d: \n", i);
        scanf("%f", &liczba);

        if(liczba <0){
            break;
        }
        suma += liczba;
    }
    printf("Suma podanych liczb: %.2f", suma);
    
    return 0;
}