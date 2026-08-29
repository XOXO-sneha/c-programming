#include <stdio.h>
float convertTenp(float celsius);

int main(){
    float far = convertTenp(0);
    printf("far is %f", far);

    return 0;
}

float convertTenp(float celsius){
    float far=celsius*(9.0/5,0)+32;
    return far;
}


