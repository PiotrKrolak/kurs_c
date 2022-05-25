#include <stdio.h>
#include <string.h>

int main(){

    char a[20] = "znak";
    char b[20] = {'z', 'n', 'a', 'k', '\0'};

    printf("Dlugosc a[] wynosi: %ld \n", strlen(a));
    printf("Dlugosc b[] wynosi: %ld \n", strlen(b));

    return 0;
}