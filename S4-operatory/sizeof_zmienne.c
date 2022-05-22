#include <stdio.h>

// sizeof(zmienna) zwraca rozmiar zmiennej w bajtach

int main(){
    short a;
    long b;
    long long c;
    double d;
    long double e;

    printf("Short ma rozmiar %lu bajtow \n", sizeof(a));
    printf("Long ma rozmiar %lu bajtow \n", sizeof(b));
    printf("Long long ma rozmiar %lu bajtow \n", sizeof(c));
    printf("Double ma rozmiar %lu bajtow \n", sizeof(d));
    printf("Long double ma rozmiar %lu bajtow \n", sizeof(e));

    return 0;
}