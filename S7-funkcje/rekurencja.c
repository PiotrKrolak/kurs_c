#include <stdio.h>

//funkcja suma to funkcja rekurencyjna - zwraca sume wszystkich liczb od n do 0
int suma(int n){
    
    if(n!=0){
        return n+ suma(n-1);
    }
    else{
        return n;
    }
}

int main(){
    int num;
    printf("Podaj liczbe: \n");
    scanf("%d", &num);
    printf("Suma: %d \n", suma(num));

    return 0;
}