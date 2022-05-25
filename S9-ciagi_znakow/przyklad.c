#include <stdio.h>
#include <string.h>

int main(){

    char a[20] = "Moj";
    char b[20] = "Kakuter";

    strcat(a,b);

    puts(a);
    puts(b);
    
    return 0;
}