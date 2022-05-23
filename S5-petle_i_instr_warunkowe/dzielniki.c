#include <stdio.h>

int main(){

    int liczba;

    printf("Podaj liczbe do mnozenia: \n");
    scanf("%d", &liczba);

    printf("Dzielniki liczby %d to: \n", liczba);
    for(int i = 1; i <= liczba; i++){
        
        if(liczba % i ==0){
            printf("%d \n", i);
        }        
    }

    return 0;
}