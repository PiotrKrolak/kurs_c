#include <stdio.h>


int main(){
    float a, b;
    printf("podaj liczbe a: \n");
    scanf("%f", &a);
    printf("podaj liczbe b: \n");
    scanf("%f", &b);

    printf("a = %.2f \n b = %.2f \n", a, b);

    a -= b;
    //printf("a = %.2f \n", a); 
    b -= a;
    //printf("b = %.2f \n", b); 
    a += b;     // -> a == b
    //printf("a = %.2f \n", a);
    b -= a;     // -> b == a
    //printf("b = %.2f \n", b);
    b=a-b;
    //printf("b = %.2f \n", b);

    printf("Po zamianie zmiennych przy uzyciu tylko 2 zmiennych: \n");
    printf("a = %.2f \n b = %.2f \n", a, b);

    return 0;
}