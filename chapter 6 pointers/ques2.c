#include <stdio.h>
void PA(int *n);
int main(){
    int n=4;
    PA(&n);
    printf("%u\n",&n);
    return 0;
}

void PA(int *n){
    printf("%u\n",n);
}
