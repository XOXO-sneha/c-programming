#include <stdio.h>

int main(){
    int a=0;int b=1;
    int n;
    printf("enter the value :");
    scanf("%d",&n);
    for(int i=0; i<=n;i++){
        printf("%d",a);
        int c=a+b;
        a=b;
        b=c;
    }

    return 0;
}
