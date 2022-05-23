#include <stdio.h>

int main(){

    int liczba1, liczba2;

    printf("Podaj pierwsza liczbe: \n");
    scanf("%d", &liczba1);

    printf("Podaj pierwsza liczbe: \n");
    scanf("%d", &liczba2);

    if(liczba1 < liczba2){
        printf("Podaj pierwsza jest mniejsza od liczby 2. \n");
    }
    else{
        printf("Podaj pierwsza jest wieksza od liczby 2. \n");
    }

    return 0;
}