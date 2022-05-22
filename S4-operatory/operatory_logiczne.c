#include <stdio.h>
/*
    && and
    || or
    ! not
*/

int main(){
    int a = 2, b = 2, c = 5, d;

    d = (a==b) && (c > b);
    printf("wartosc wyrazenia to: (a==b) && (c > b) %d \n", d);
    d = (a==b) && (c < b);
    printf("wartosc wyrazenia to: (a==b) && (c < b) %d \n", d);

    d = (a==b) || (c < b);
    printf("wartosc wyrazenia to: (a==b) || (c < b) %d \n", d);
    d = (a!=b) && (c < b);
    printf("wartosc wyrazenia to: (a!=b) || (c < b) %d \n", d);

    d = !(a != b);
    printf("wartosc wyrazenia to: !(a != b) %d \n", d);
    d = !(a == b);
    printf("wartosc wyrazenia to: !(a == b) %d \n", d);

    return 0;
}