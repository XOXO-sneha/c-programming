#include <stdio.h>

int main(){
    int radius,height;
    float pie;
    radius = 4;
    pie = 3.14;
    height=25;
    printf("the area of the circle with radius %d is:%f",radius,pie*radius*radius);
    printf("the volume of cylinder %d radius & %d height is :%f",radius,height,pie*radius*radius*height); 
    return 0;

}
