#include <stdio.h>
float square(float side);
float circle(float radius);
float rectangle(float l,float b);

int main(){
    int l = 67;
    int b=54;
    printf("area of rectangle is %f\n",rectangle(l,b));
    float side=25.2;
    printf("area of square is %f\n",square(side));
    float radius=6;
    printf("area of circle is %f",circle(radius));

    return 0;
}

float square(float side){
    return side*side;
}

float circle( float radius){
    return 3.14*radius*radius;
}

float rectangle(float l,float b){
    return l*b;
}