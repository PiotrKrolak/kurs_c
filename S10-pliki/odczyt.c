#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int liczba;
    FILE *plik; // deklaracja wskaźnika do pliku

    if((plik = fopen("example.txt", "r")) == NULL){
        printf("Blad przy otwieraniu pliku.");
        exit(1);
    } 

    fscanf(plik, "%d", &liczba); // odczyt z pliku

    printf("wartosc odczytana z pliku: 5d \n", liczba);
    fclose(plik); // po kazej operacji na pliku, musi on zostac zamkniety za pomoca funkcji fclose(), plik - wskazuje na plik do zamkniecia

    return 0;
}