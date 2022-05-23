#include <stdio.h>

int main(){

    int arg1 = 10, arg2 =10;

    for(int i = 1; i <= arg1; i++){
        for(int j=0; j<=arg2; j++){
            printf("%d * %d = %d \n", i, j, i*j);
        }
        printf("\n");
    }

    return 0;
}