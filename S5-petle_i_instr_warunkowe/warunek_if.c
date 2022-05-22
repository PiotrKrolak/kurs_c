#include <stdio.h>

int main(){
    int liczba;

    printf("Podaj liczbe: \n");
    scanf("%d", &liczba);

    if(liczba > 0){
        printf("Liczba %d jest dodatnia", liczba);
    }
    else{
        printf("Liczba %d jest ujemna", liczba);
    }

    return 0;
}