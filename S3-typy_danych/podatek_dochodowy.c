#include <stdio.h>

#define procent 0.23

int main(){
    float brutto, netto, podatek;

    printf("Podaj przychod brutto: ");
    scanf("%f", &brutto);
    
    netto = brutto - (brutto * procent);
    podatek = brutto - netto;

    printf("Twoj zarobek netto to %0.2f \n", netto);
    printf("Twoj podatek to %0.2f \n", podatek);

    return 0;
}