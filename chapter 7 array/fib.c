#include <stdio.h>
int main(){
    int n;
    printf("enter n: ");
    scanf("%d",&n);

    int fib[n];
    fib[0]=0; 
    fib[1]=1;

    for(int i=2;i<n;i++){//i=2 fib[2]=1
        fib[i]=fib[i-1]+fib[i-2];// imp line 
        printf("fib:%d\t",fib[i]);
    }
    printf("\n");
    return 0;
}
