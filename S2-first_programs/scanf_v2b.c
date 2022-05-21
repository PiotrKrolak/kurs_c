#include <stdio.h>

int main(){
    int liczba1, liczba2, wynik;

    printf("Podaj 2 liczby: ");
    scanf("%d %d", &liczba1, &liczba2);

    wynik = liczba1 + liczba2;

    printf("%d + %d = %d", liczba1, liczba2, wynik);
}