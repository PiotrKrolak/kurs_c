#include <stdio.h>

int wieksza(int liczba1, int liczba2){
    if(liczba1 > liczba2)
        return liczba1;
    else
        return liczba2;
}

int main(){
    int a = 100;
    int b = 101;
    
    printf("wieksza liczba ma wartosc: %d \n", wieksza(a,b));
    return 0;
}