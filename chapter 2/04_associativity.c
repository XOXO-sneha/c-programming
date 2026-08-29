#include <stdio.h>

int main(){
    int a =4;
    int b = 4;
    int c = 7;
    printf("the value is %d", a*b/c+7);
    printf("the value is %d", 4*b/c+7*a);
    // 4*b/c+7*a
    // 4*b/c+28
    // 1/c+28
    // 1/7+28
    // 0.14 +28
    return 0;
}
