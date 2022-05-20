#include <stdio.h>

int main(){
    char a ='g';

    if(a =='a' || a =='e' || a =='i' || a =='o' || a =='u' || a =='y')
    printf("%c jest samogloska", a);
    else
    printf("%c jest spolgloska", a);

    return 0;
}