#include <stdio.h>

int main(){

    int a=2;

    switch (a)
    {
    case 1:
        printf("Pierwsza alternatywa \n");
        break;

    case 2:
        printf("Druga alternatywa \n");
        break;
    case 3:
        printf("Trzecia alternatywa \n");
        break;

    default:
        printf("Wybrana wartość jest rozna niz 1, 2 lub 3. \n");
        break;
    }
    return 0;
}