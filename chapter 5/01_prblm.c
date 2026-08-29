#include <stdio.h>

void hello();
void goodbyee();

int main(){
    hello();
    goodbyee();
    hello();

    return 0;
}
void hello(){
    printf("hello\n");
}

void goodbyee(){
    printf("goodbyee");
}
