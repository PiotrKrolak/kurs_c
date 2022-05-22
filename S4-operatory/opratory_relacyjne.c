#include <stdio.h>
/*
    == rowna sie
    > wiekesze od
    > mniejsze od 
    != rozne od 
    >= wieksze lub rowne od
    <= mniejsze lub rowne od
*/

int main(){
    int a = 5, b = 5, c = 10;

    printf("%d == %d , wartosc wyrazenia: %d \n", a, b, a==b);
    printf("%d == %d , wartosc wyrazenia: %d \n", a, c, a==c);

    printf("%d > %d , wartosc wyrazenia: %d \n", a, b, a>b);
    printf("%d > %d , wartosc wyrazenia: %d \n", a, c, a>c);

    printf("%d < %d , wartosc wyrazenia: %d \n", a, b, a<b);
    printf("%d < %d , wartosc wyrazenia: %d \n", a, c, a<c);

    printf("%d != %d , wartosc wyrazenia: %d \n", a, b, a!=b);
    printf("%d != %d , wartosc wyrazenia: %d \n", a, c, a!=c);

    printf("%d >= %d , wartosc wyrazenia: %d \n", a, b, a>=b);
    printf("%d >= %d , wartosc wyrazenia: %d \n", a, c, a>=c);

    printf("%d <= %d , wartosc wyrazenia: %d \n", a, b, a<=b);
    printf("%d <= %d , wartosc wyrazenia: %d \n", a, c, a<=c);

    return 0;
}