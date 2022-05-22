#include <stdio.h>

int main(){
    float a, b, h, pole;
    printf("Podaj podstawe a trapezu: ");
    scanf("%f",&a);
    printf("Podaj podstawe b trapezu: ");
    scanf("%f",&b);
    printf("Podaj wysokosc h trapezu: ");
    scanf("%f",&h);

    pole = ((a+b)*h)/2;

    printf("Pole trapezu to %.2f", pole);

    return 0;
}