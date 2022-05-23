#include <stdio.h>

enum numer{ZERO, JEDEN, DWA=1, TRZY, CZTERY=-2, PIEC, SZESC, SIEDEM, OSIEM};

int main(){
    
    printf("%d \n", ZERO);
    printf("%d \n", JEDEN);
    printf("%d \n", DWA);
    printf("%d \n", TRZY);
    printf("%d \n", CZTERY);
    printf("%d \n", PIEC);
    printf("%d \n", SZESC);
    printf("%d \n", SIEDEM);
    printf("%d \n", OSIEM);

    return 0;
}