#include <stdio.h>

int main(){
    char operator;
    double liczba1, liczba2;

    printf("Podaj operaotr arytmetyczny /(+, -, *, / /): \n");
    scanf("%c", &operator);
    printf("Podaj dwie liczby: \n");
    scanf("%lf %lf", &liczba1, &liczba2);

    switch(operator){
        case '+':
            printf("%.2lf + %.2lf = %.2lf",liczba1, liczba2, liczba1 + liczba2);
            break;
        case '-':
            printf("%.2lf - %.2lf = %.2lf",liczba1, liczba2, liczba1 - liczba2);
            break;
        case '*':
            printf("%.2lf * %.2lf = %.2lf",liczba1, liczba2, liczba1 * liczba2);
            break;
        case '/':
            printf("%.2lf / %.2lf = %.2lf",liczba1, liczba2, liczba1 / liczba2);
            break;
        default: 
            printf("Niepoprawny operator arytmetyczny.");
            break;
    }
}