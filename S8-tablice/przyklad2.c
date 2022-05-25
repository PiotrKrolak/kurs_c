#include <stdio.h>

int main(){
    
    float oceny[20], suma, srednia;
    int i, n;

    printf("Podaj ilosc ocen: \n");
    scanf("%d", &n);

    for(i=0; i<n; i++){
        printf("Podaj ocene %d. : \n", i+1);
        scanf("%f", &oceny[i]);

        suma+=oceny[i];
    }
    srednia = suma / n;

    printf("Twoja srednia to: %.2f \n", srednia);

    return 0;
}