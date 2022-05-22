#include <stdio.h>

#define PI 3.14

int main(){
    float r, pole;

    printf("podaj promien kola: ");
    scanf("%f",&r);

    pole= PI *(r*r);

    printf("Pole kola wynosi %.2f",pole);

    return 0;
}