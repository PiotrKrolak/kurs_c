#include <stdio.h>

#define wspolczynnik 1.36

int main(){
    float kW, KM;
    printf("Podaj liczbe kW twojego silnika: \n");
    scanf("%f", &kW);

    KM = kW * wspolczynnik;

    printf("%.2f kW to %.2f KM \n", kW, KM);

    return 0;
}