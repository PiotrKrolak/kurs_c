#include <stdio.h>

int main(){
    int a = 2;
    float b = 5.32;
    double c = 7.212;
    char d ='c';

    printf("Typ int: %d \n", a);
    printf("Typ float: %.3f \n", b);
    printf("Typ double: %.4lf \n", c);
    printf("Typ char: %c \n", d);

    return 0;
}