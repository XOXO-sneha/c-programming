#include <stdio.h>
int main(){
    int addhar[5];

    //input
    int *ptr=&addhar[0];
    for(int i=0;i<5;i++){
        printf("%d index:",i);
        scanf("%d",(ptr+i));//ptr+i is increase by i value
    }
    //output
    for(int i=0;i<5;i++){
        printf("%d index: %d\n", i, addhar[i]);
    }
    return 0;
}
