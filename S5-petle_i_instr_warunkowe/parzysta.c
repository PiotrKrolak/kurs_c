#include <stdio.h>

int main(){

    int liczba;

    printf("Podaj liczbe do sprawdzenia: \n");
    scanf("%d", &liczba);

    if(liczba % 2 == 0){
        printf("Liczba %d jest parzysta. \n", liczba);
    }
    else{
        printf("Liczba %d jest nieparzysta. \n", liczba);
    }

    return 0;
}