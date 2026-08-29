#include <stdio.h>
int rev(int arr[],int n);
void pa(int arr[], int n);
int main(){
    int arr[]={3,4,8,9,7};
    rev(arr,5);
    pa(arr,5);
    return 0;
}
void pa(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }
    printf("\n");
}
int rev(int arr[],int n){
    for(int i=0;i<n/2;i++){
        int First=arr[i];
        int sec=arr[n-i-1];
        arr[i]=sec;
        arr[n-i-1]=First;
    }
}
