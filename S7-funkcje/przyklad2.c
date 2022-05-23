#include <stdio.h>

//  zamiana miejscami 1 liczby z 2 liczbą
void change(int *l1, int *l2){
    int temp;
    temp = *l1;
    *l1 = *l2;
    *l2 = temp;
}

int main(){
    int liczba1 =5;
    int liczba2 =10;

    change(&liczba1, &liczba2);

    printf("Liczba 1: %d \n", liczba1);
    printf("Liczba 2: %d \n", liczba2);

    return 0;
}