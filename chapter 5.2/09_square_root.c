//print 1-n
#include <stdio.h>
void print(int n){
    if(n==0){
        return;
    }
    int Nm1=(n-1);
    print(n-1);
    printf("%d",n);
}
int main(){
    print(5);
    return 0;
}

//iseven or odd
int iseven(int num){
    if( num %2 ==0){
        return 0;
    }
    else{
        return 1;
    }
}
int main(){
    printf("%d",iseven(8));
    return 0;
}

//sum 1-nz
int sum(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    int Nm1=sum(n-1);
    int sum=n+Nm1;
    return sum;
}
int main(){
    printf("%d",sum(5));
    return 0;
}
