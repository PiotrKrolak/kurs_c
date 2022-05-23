#include <stdio.h>

int main(){

    int liczba1, liczba2, liczba3;

    printf("Podaj liczbe 1: \n");
    scanf("%d", &liczba1);
    printf("Podaj liczbe 2: \n");
    scanf("%d", &liczba2);
    printf("Podaj liczbe 3: \n");
    scanf("%d", &liczba3);

    if(liczba1 >= liczba2 && liczba1 >= liczba3){
        printf("Liczba %d jest najwieksza \n", liczba1);
    }
    if(liczba2 >= liczba1 && liczba2 >= liczba3){
        printf("Liczba %d jest najwieksza \n", liczba2);
    }
    if(liczba3 >= liczba1 && liczba3 >= liczba2){
        printf("Liczba %d jest najwieksza \n", liczba3);
    }
    else{
        printf("Co to sie stanelo?! \n");
    }

    return 0;
}