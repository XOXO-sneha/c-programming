#include <stdio.h>
int main(){
    int age=22;
    int _age=34;
    int *ptr=&age;
    int *ptr2=&_age;
    printf("diff: %u\n",ptr-ptr2);//1=true
    ptr2=&age;
    printf("comp:%u",ptr==ptr2);//1=true

    return 0;
}
