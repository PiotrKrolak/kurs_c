#include <stdio.h>
#include <math.h>

int main(){

    float a, b, c, x0, x1, x2, delta;

    printf("Podaj wspolczynniki a, b, c: \n");
    scanf("%f %f %f", &a, &b, &c);

    delta = b*b-4*a*c;
    x0 = -b/(2*a);
    x1 = (-b - sqrt(delta))/(2*a);  //sqrt(delta) -> pierwiastek kwadratowy z delty
    x2 = (-b + sqrt(delta))/(2*a);

    if(delta > 0){
        printf("Istnieja dwa miejsca zeowe: x1 = %.2f, x1 = %.2f",x1,x2);
    }
    else{
        if(delta == 0){
            printf("Istnieje jedno miejsce zeowe: x0 = %.2f",x0);
        }
        else{
            printf("Nie istnieje miejsce zerowe");
        }
    }

    return 0;
}