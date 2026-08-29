#include <stdio.h>

int main(){
    if(1){
        printf("this if is executed\n");//non zero is considered to be true 
    }
    if(3456){
        printf("this if it executed\n");
    }
    if('c'){
        printf("this is a character not executed\n");
    }
    if(0){
        printf("this zero will not executed\n");//yhis will not execute
    }
    if(7.990){
        printf("this is a float no. will not executed\n");
    }
    return 0;
}
