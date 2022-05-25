#include <stdio.h>
#include <string.h>

int main(){

    char a[20] = "adam";
    char b[20] = "Adam";
    char c[20] = "adam";

    int wynik;

    wynik = strcmp(a, b);
    printf("wynik porownania a i b = %d \n", wynik);
    
    wynik = strcmp(a, c);
    printf("wynik porownania a i c = %d \n", wynik);

    return 0;
}