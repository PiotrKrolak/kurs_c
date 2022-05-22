#include <stdio.h>
/*
    c++ - postinkrementacja - inkrementacja nastepuje po wykonaniu dzialania
    ++c - preinkrementacja - inkrementacja nastepuje przed wykonaniem dzialania
    c-- - postdekrementacja - dekrementacja nastepuje po wykonaniu dzialania
    --c - predekrementacja - dekrementacja nastepuje przed wykonaniem dzialania
*/

int main(){
    int a = 2;
    float b = 5.7;

    printf("a++ = %d \n", a++);
    printf("++a = %d \n", ++a);

    printf("b-- = %.1f \n", b--);
    printf("--b = %.1f \n", --b);

    return 0;
}