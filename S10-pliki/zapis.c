#include <stdio.h>
#include <stdlib.h>

int main(){
    int liczba;

    FILE *plik; // deklaracja wskaźnika do pliku
    plik = fopen("example.txt", "a+"); // otwarcie pliku - path - sciezka do pliku, a+ - tryb dostepu do pliku;

    printf("podaj liczbe: \n");
    scanf("%d", &liczba);

    fprintf(plik, "%d", liczba);
    fclose(plik);

    return 0;
}