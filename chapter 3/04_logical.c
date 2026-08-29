//and,or,not
#include <stdio.h>

int main(){
    int a=0; int b=1; 
    printf("the value of a and b is %d\n", a&&b);
    printf("the value of a or b is %d\n", a||b);
    printf("the value of not(a)is %d\n", !a);
    printf("the value of not(b)is %d", !b);

    if(a&&b){
        printf("both are true");
    }
    //same as the below
    if(a){
        if(b){
            printf("both are true");
        }
    }
    return 0;
}
