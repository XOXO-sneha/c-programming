#include <stdio.h>
int main(){
    int *ptr;
    int x;

    ptr =&x;//address of x 
    *ptr =0;//value of ptr if 2000 uss value pr x ki ky value h vo ayegiii
    printf("x = %d\n",x);//0
    printf(" *ptr =%d\n",*ptr);//0

    *ptr += 5;
    printf("x = %d\n",x);//5
    printf(" *ptr =%d\n",*ptr);//5

    (*ptr)++;
    printf("x = %d\n",x);//6
    printf(" *ptr =%d\n",*ptr);//5
    return 0;
}
