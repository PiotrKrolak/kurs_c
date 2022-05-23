#include <stdio.h>

union uimie{
    char imie [25];
    char nazwisko[25];
    int wiek;
}u1;

struct simie
{
    char imie [25];
    char nazwisko[25];
    int wiek;
}s1;


int main(){
    printf("Rozmiar unii: %lu bajtow.\n", sizeof(u1));
    printf("Rozmiar struktury: %lu bajtow. \n", sizeof(s1));
}