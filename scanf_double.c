#include <stdio.h>

int main(){
    double liczba1, liczba2, wynik;

    printf("Podaj 2 liczby: \n");
    scanf("%lf %lf", &liczba1, &liczba2); //%lf oznacza typ double

    wynik = liczba1 + liczba2;

    printf("%lf + %lf = %.2lf", liczba1, liczba2, wynik); // wpisanie .2 pomiedzy % a lf -> %.2lf ogranicza wyświetlenie wyniku do 2 miejsc po przecinku

}