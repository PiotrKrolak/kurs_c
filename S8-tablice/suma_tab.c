#include<stdio.h>

int main()
{
    int tab[5]={7,2,3,1,6};
    int suma=0;
    
    for(int i=0; i<5; i++){
        suma+=tab[i];
    }
    printf("Suma elementow z tablicy: %d", suma);
    
    return 0;
}