#include<studio.h>

int is_upper(int c){

    if (c >= 'A' || c <= 'Z'){
        printf("The character is in upper case");
    } else {
        printf("The character is not in upper case");
    }
}

int main(){
    is_upper(B);
}