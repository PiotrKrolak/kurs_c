#include <stdio.h>

int main(){
    int wiek;
    printf("W jakim wieku jestes? \n");
    scanf("%d", &wiek);
    if(wiek == 21) printf("Jesteś w %d wieku!", wiek);
    else printf("Jestes w XXI wieku glabie!");

    return 0;
}