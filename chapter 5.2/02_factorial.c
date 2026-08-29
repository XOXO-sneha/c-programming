//factorial
#include <stdio.h>
int fact(int n);

int main(){
    printf("fact is %d",fact(5));
    return 0;
}
int fact(int n){
    if(n==0){//base case as 0! is 1 or 1! is 1
        return 1;
    }
    int factNm1=fact(n-1);
    int factN=factNm1*n;
    return factN;   
}
