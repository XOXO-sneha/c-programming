#include <stdio.h>
void storetable(int arr[][10],int n,int m,int num);
int main(){
    int table[2][10];
    storetable(table,0,10,2);
    storetable(table,1,10,3);

    for(int i=0;i<10;i++){// 0 to 10
        printf("%d\t", table[0][i]);
    }
    printf("\n");
    for(int i=0;i<10;i++){// 0 to 10
        printf("%d\t", table[1][i]);
    }
    return 0;
}
void storetable(int arr[][10],int n,int m,int num){
    for(int i=0;i<m;i++){// 0 to 10
        arr[n][i]=num*(i+1);//2,4,6,8,10.....
        // arr[0][0] arr[0][1] arr[0][2]...
    }
}
