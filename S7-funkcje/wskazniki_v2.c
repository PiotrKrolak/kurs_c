#include <stdio.h>

//& -> miejsce w pamieci???
int main(){
    int* pr, r;
    r = 10;

    printf("Wartość pr to: %d \n", pr);
    printf("Wartość r to: %d \n", r);

    pr = &r;
    printf("%d \n", *pr);
    
    printf("adres pr to: %p \n", &pr);
    printf("adres r to: %p \n", &r);

    return 0;
}