#include <stdio.h>

// int main(){
//     int a=1;
//     printf("scan: ");
//     scanf("%d", &a);

//     a=2;

//     return 0;
// }

int main(){
    printf("Wprowadz swoje imie \n");
    char imie[20];
    scanf("%s", &imie);
    printf("Witaj %s!", imie);
    getchar();
    return 0;
} 