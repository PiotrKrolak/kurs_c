#include <stdio.h>
#include <string.h>

int main(){

    char ciag1[10] = "Hello";
    char ciag2[10] = "World!";
    char ciag3[10];

    int size;
    char *name;

    strcpy(ciag3, ciag1);
    printf("strcpy(ciag3, ciag1): %s \n", ciag3);

    strcat(ciag1, ciag2);
    printf(" strcat(ciag1, ciag2); %s \n", ciag1);


    size = strlen(ciag1);
    printf("size = strlen(ciag1): %d \n", size);

    return 0;
}