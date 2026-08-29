#include <stdio.h>
int sum(int n);

int main(){

    return 0;
}
int sum(int n){
    if(n==1){
        return 1;
    }
    int sumNm1=sum(n-1);//sum of 1 to n
    int sumN=sumNm1+n;//sum(n-1)+n
    return sumN;
  //n=5, 1+2+3+4+5
  //n=4,1+2+3+4
  //n=3, 1+2+3
  //n=2, 1+2
}
