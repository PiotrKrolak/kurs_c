#include <stdio.h>

int main(){

    int arg1 = 10, liczba;

    printf("Podaj liczbe do mnozenia: \n");
    scanf("%d", &liczba);

    for(int i = 1; i <= arg1; i++){
        
        printf("%d * %d = %d \n", i, liczba, i*liczba);
        
    }

    return 0;
}