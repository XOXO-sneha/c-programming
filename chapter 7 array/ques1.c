#include <stdio.h>
int odd(int arr[],int n);
int main(){
    int arr[]={1,5,7,3,4,8,9};
    printf("odd:%d",odd(arr,7));
    return 0;
}
int odd(int arr[],int n){

    int odd=0;
    for(int i=0;i<n;i++){//sare arr ko travel krega 
        if(arr[i]%2!=0){
            odd++;
        }
    }
    return odd;
}
