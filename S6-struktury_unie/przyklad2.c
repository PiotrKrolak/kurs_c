#include <stdio.h>

struct samochod{
    char marka[30];
    char model[30];
    int rok;

}s[2]; // 2 w nawiazie kwadrtowym deklaruje ze zostana stworzone dwie takie struktury

int main(){

    printf("Dane samochodow osobowych. \n");

    for(int i=0; i<2; ++i){
        
        printf("Dla auta numr %d. \n", i+1);
        
        printf("Podaj marke auta: \n");
        scanf("%s",&s[i].marka);
        printf("Podaj model auta: \n");
        scanf("%s",&s[i].model);
        printf("Podaj rok auta: \n");
        scanf("%d",&s[i].rok);
    }

    printf("Podane informacje o autach: \n");
    
    for(int i=0; i<2; i++){

        printf("Dla auta numr %d. \n", i+1);
        
        printf("Marka auta: %s \n",s[i].marka);
        printf("Model auta: %s \n",s[i].model);
        printf("Rok auta: %d \n",s[i].rok);
    }

    return 0;
}