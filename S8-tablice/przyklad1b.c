#include <stdio.h>

int main(){
    
    int a[4];
    
    printf("Podaj cztery liczby: \n");

    for(int i=0; i<4; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Podane wartosci to: \n");
    for(int j=0; j<4;j++){
        printf("%d \n", a[j]);
    }

    return 0;
}