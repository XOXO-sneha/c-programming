#include <stdio.h>
int main(){
    int age=22;
    int *ptr=&age;
    printf("%d",age);
    printf("%d",*ptr);
    printf("%d",*(&age));
    return 0;
}
