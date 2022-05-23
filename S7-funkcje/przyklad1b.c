#include <stdio.h>

//& -> miejsce w pamieci???
int main(){
    int* pr, r;
    
    r = 22;

    printf("Wartosc r to: %d \n", r);
    printf("adres r to: %p \n", &r);
    
    pr=&r;
    
    printf("Wartosc pr to: %d \n", pr);
    printf("adres pr to: %p \n", *pr);
    
    r = 5;

    printf("Wartosc r to: %d \n", r);
    printf("adres r to: %p \n", &r);

    return 0;
}