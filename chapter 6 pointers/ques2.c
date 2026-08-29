#include <stdio.h>
void PA(int n);
int main(){
    int n=4;
    printf("%p\n",&n);
    PA(n);
    return 0;
}

void PA(int n){
    printf("%p\n",&n);
}
