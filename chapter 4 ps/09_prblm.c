#include <stdio.h>

int main(){
    int n=8;
    int not_prime=0;
    for(int i=2;i<n;i++){
        if(n%i==0 && n!=2){
            not_prime=1;
        }
    }    
        if(not_prime){
            printf("%d is not pirme no.",n);
        }
        else{
            printf("%d is prime no.",n);
        }

    return 0;
}
