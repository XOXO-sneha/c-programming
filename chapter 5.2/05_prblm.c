//fabonacci series
#include <stdio.h>
int fabo(int n);

int main(){
    printf("fabonacci is %d", fabo(6));
    return 0;
}

int fabo(int n){
        if(n==0){
            return 0;
        }
        if (n==1){
            return 1;
        }
    int fabNm2=fabo(n-2);
    int fabNm1=fabo(n-1);
    int fabo = fabNm1+fabNm2;
    return fabo;
}
