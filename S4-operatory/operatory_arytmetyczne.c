#include <stdio.h>

int main(){
    int a = 5, b=2, c;

    c = a + b;
    printf("a + b = %d \n", c);

    c = a - b;
    printf("a - b = %d \n", c);

    c = a * b;
    printf("a * b = %d \n", c);

    c = a / b;
    printf("a / b = %d \n", c);

    c = a % b;
    printf("a %% b = %d \n", c);
    
    return 0;
}