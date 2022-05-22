#include <stdio.h>

int main(){
    float a, h, pole;
    printf("Podaj podstawe trojkata: ");
    scanf("%f",&a);
    printf("Podaj wysokosc trojkata: ");
    scanf("%f",&h);

    pole = a * h;

    printf("Pole trojkata to %.2f", pole);

    return 0;
}