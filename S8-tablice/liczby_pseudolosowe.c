#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    
    int a;
    srand(time(0));
    do{
         a = rand()%10;
        printf("%d \n",a);
    }while(a!=5);

    return 0;
}