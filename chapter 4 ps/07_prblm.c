#include <stdio.h>
//factorial 8!=1x2x3x4x5x6x7x8
//n!=1x2x3x4x..........xn
//0!=1
int main(){
    int product=1;
    int n=5;
    for(int i=1;i <= n;i++){
        product=product*i;
    }
    printf("the factorial is %d",product);


    return 0;
}
