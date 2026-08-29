#include <stdio.h>

int main(){
    int age=89;

    if (age>18){
        printf("you can drive\n");
    }
    else if(age=18){
        printf("you can not drive but eligible for driving license");
    }
    else{
        printf("you cannot drive");
    }

    return 0;
}
