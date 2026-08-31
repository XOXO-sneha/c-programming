#include <stdio.h>
struct complex{//2+3i type
    int real;
    int img;
};
int main(){
    struct complex no1={5,9};
    struct complex *ptr=&no1;
    printf("imaginary part =  %d\n", ptr->img);
    printf("real part =  %d\n", ptr->real);
    return 0;
}
