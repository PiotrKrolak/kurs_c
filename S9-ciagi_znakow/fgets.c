#include <stdio.h>
#include <string.h>

int main(){

    char imie[20];

    printf("Podaj imie: \n");
    fgets( imie, sizeof(imie), stdin);
    printf("Twoje imie to: \n");
    puts(imie);

    return 0;
}