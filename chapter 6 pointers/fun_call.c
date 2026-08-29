#include <stdio.h>
void sq(int n);
void _sq(int *n);
int main(){
    int number =7;
    sq(number);
    printf("number=%d\n",number);

    _sq(&number);
    printf("number=%d\n",number);
    return 0;
}
void sq(int n){
    n=n*n;
    printf("sq=%d\n",n);
}
void _sq(int *n){
    *n=*(n)*(*n);
    printf("sq=%d\n",*n);
}
