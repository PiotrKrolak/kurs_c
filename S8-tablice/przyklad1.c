#include <stdio.h>

int main(){
    
    int a[3] = {3, 5, 2};
    
    printf("element tablicy o indeksie 0: %d \n", a[0]);
    printf("element tablicy o indeksie 1: %d \n", a[1]);
    printf("element tablicy o indeksie 2: %d \n", a[2]);

    a[0] = 97;
    a[1] = 23;

    printf("element tablicy o indeksie 0: %d \n", a[0]);
    printf("element tablicy o indeksie 1: %d \n", a[1]);
    printf("element tablicy o indeksie 2: %d \n", a[2]);

    return 0;
}