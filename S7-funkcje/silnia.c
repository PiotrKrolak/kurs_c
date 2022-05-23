#include <stdio.h>

int silnia(int n){
    if(n>1)
        return n * silnia(n-1);
    else
        return 1;
}

int main(){
    int n;

    printf("Podaj liczbe calkowita:  \n");
    scanf("%d", &n);
    printf("Silnia z %d to: %d \n", n, silnia(n));

    return 0;
}