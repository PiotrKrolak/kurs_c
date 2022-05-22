#include <stdio.h>


int main(){
    int a, b;
    printf("podaj liczbe a: \n");
    scanf("%d", &a);
    printf("podaj liczbe b: \n");
    scanf("%d", &b);

    printf("a = %d \n b = %d \n", a, b);

    printf("a == b: %d \n", a == b);
    printf("a > b: %d \n", a > b);
    printf("a < b: %d \n", a < b);
    printf("a >= b: %d \n", a >= b);
    printf("a <= b: %d \n", a <= b);
    printf("a != b: %d \n", a != b);

    return 0;
}