#include <stdio.h>
/*
    & and
    | or
    << przesuniecie bitowe w lewo
    >> przesuniecie bitowe w prawo
    ~ not (~0 = 1) i (~1 = 0)
*/

int main(){
    unsigned char a = 5, b = 9; //dlaczego typ char?!?!?
    //a = 00000101 b = 00001001

    printf("a&b = %d \n", a&b);    // 00000001 = 1
    printf("a|b = %d \n", a|b);    // 00001101 = 13
    printf("a<<1 = %d \n", a<<1);  //00001010 = 10
    //printf("a>>1 = %d", a>>1);  //
    printf("~a = %d \n", a = ~a);      // 11111010 = 250

    return 0;
}