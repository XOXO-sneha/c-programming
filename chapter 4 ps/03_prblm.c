#include <stdio.h>

int main(){
    int i=1;
    int sum = 0;
    while(i<11){
        sum+=i;
        i++;
    }
    printf("the sum of first n natural no is %d",sum);

    return 0;
}
