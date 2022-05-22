#include <stdio.h>
/*
    a+=b -> a=a+b 
    a-=b -> a=a-b
    a*=b -> a=a*b
    a/=b -> a=a/b
    a%=b -> a=a%b
*/

int main(){
    int a = 2, b;

    b = a;
    printf("b = a = %d \n",b);
    b += a;
    printf("b += a = %d \n", b);
    b -= a;
    printf("b -= a = %d \n", b);
    b *= a;
    printf("b *= a = %d \n", b);
    b /= a;
    printf("b /= a =%d \n", b);
    b %= a;
    printf("b %%= a = %d \n", b);

    return 0;
}