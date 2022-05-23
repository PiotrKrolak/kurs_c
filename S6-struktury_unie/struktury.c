#include <stdio.h>
#include <string.h>

struct uczen
{
    char imie [25];
    char nazwisko[25];
    int wiek;
    char plec[25];
};


int main(){

    struct uczen u1;
    

    //  dostęp do zmiennej wewnatrz struktury przez funkcje strcpy() z bibblioteki string.h
    //  strcpy(char_to_ktorego_kopiujemy(wskaznik), char_ktory_kopiujemy(wskaznik))
    strcpy(u1.imie, "Jan");
    strcpy(u1.nazwisko, "Kowalski");
    strcpy(u1.plec, "M");
    u1.wiek = 18;

    printf("Imie ucznia: %s \n",u1.imie);
    printf("Nazwisko ucznia: %s \n",u1.nazwisko);
    printf("Wiek ucznia: %d \n",u1.wiek);
    printf("Plec ucznia: %s \n",u1.plec);

    return 0;
}