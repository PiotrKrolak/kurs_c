#include <stdio.h>

// sizeof(zmienna) zwraca rozmiar zmiennej w bajtach

int main(){
    int a;
    float b;
    double c;
    char d;

    printf("Int ma rozmiar %lu bajtow \n", sizeof(a));
    printf("Float ma rozmiar %lu bajtow \n", sizeof(b));
    printf("Double ma rozmiar %lu bajtow \n", sizeof(c));
    printf("Char ma rozmiar %lu bajtow \n", sizeof(d));

    return 0;
}