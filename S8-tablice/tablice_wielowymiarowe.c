#include <stdio.h>

int main(){
    
    int a[2][3] = {{3, 5, 2}, {-1, 2, 4}};
    int b[][3] = {{-3, -5, -2}, {1, -2, -4}};
    int c[2][3] = {3, 5, 2, -1, 2, 3};

    printf("element tablicy 1: %d \n", a[0][1]);
    printf("element tablicy 2: %d \n", b[1][2]);
    printf("element tablicy 3: %d \n", c[1][1]);

    return 0;
}