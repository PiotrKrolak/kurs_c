#include <stdio.h>

int main(){
    
    char a[] = "abcd";
    char b[10] = "abcd";
    char c[] = {'a', 'b', 'c', 'd', '\0'};
    char d[10] = {'a', 'b', 'c', 'd', '\0'};

    printf("Tablica a = %s \n", a);
    printf("Tablica b = %s \n", b);
    printf("Tablica c = %s \n", c);
    printf("Tablica d = %s \n", d);

    for(int i=0; i<4; i++){
        printf("%d element tablicy a = %c \n", i, a[i]);
        printf("%d element tablicy b = %c \n", i, b[i]);
        printf("%d element tablicy c = %c \n", i, c[i]);
        printf("%d element tablicy d = %c \n", i, d[i]);
    }

    return 0;
}