#include <stdio.h>

int main(){

    int suma = 0;
    int przeskok;

    for(int i = 1; i <=10; i++){
        //printf("Podaj liczbe %d: \n", i);
        //scanf("%f", &liczba);

        suma += i;

        if(i == 5){
            goto przeskok;
        }
    }

    przeskok: 
    printf("Suma = %d", suma);
    
    return 0;
}