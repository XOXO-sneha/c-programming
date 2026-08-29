#include <stdio.h>

int main(){
    int n=8;
    int not_prime=0;
    int i=2;
    do{
        if(n%i==0 && n!=2){
            not_prime=1;
            break;
        }
        i++;
    }while(i<n);   
        if(not_prime){
            printf("%d is not prime no.",n);
        }
        else{
            printf("%d is prime no.",n);
        }

    return 0;
}
