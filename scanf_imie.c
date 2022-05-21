#include <stdio.h>

int main(){
    char imie[25];
    printf("Jak się nazywasz ksiaze?:\n");
    scanf("%s", imie);  // przechwytywanie tablicy charow z klawiatury
    printf("Twoje imie to %s - ksiaze", imie);

    return 0;
}