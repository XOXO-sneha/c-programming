//fabonacci
#include <stdio.h>
int fabo(int n);

int main(){
    //printf("fabonacci is %d",fabo(7));//direct answer degi usme tera in fab(7)separate vla htt jyega aur second last ki printf wli bhiii 
    fabo(7);
    return 0;
}

int fabo(int n){
    if (n==0){
        return 0;
    }
    if (n==1){
        return 1;
    }
    int fabo1=fabo(n-1);
    int fabo2=fabo(n-2);
    int fabn=fabo1+fabo2;
    printf("fabo of %d is %d\n",n,fabn);
    return fabn;
}
