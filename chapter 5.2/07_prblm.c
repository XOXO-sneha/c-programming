//sum of digit of a number
#include <stdio.h>
int sum(int n);

int main(){
    printf("sum is %d",sum(7));
    return 0;
}

int sum(int n){
    if(n==0){
        return 0;
    }
    if (n==1){
        return 1;
    }
    int sumNm1=sum(n-1);
    int sumn=sumNm1+n;
    return sumn;

}

