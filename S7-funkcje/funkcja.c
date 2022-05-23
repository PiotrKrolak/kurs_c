#include <stdio.h>

int function(){
    int a, b;
    printf("Podaj dwoe liczby: \n");
    scanf("%d %d", &a, &b);

    printf("Twoja liczba to: %d \n", a+b);
}

int function2(){
    int a, b;
    printf("Podaj dwoe liczby: \n");
    scanf("%d %d", &a, &b);

    return a+b;
}

int main(){
    int x;
    x = function2();

    //function();
    
    printf("Suma dwoch liczb to: %d", x);

    return 0;
}